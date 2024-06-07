#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "shader.h"
#include "model.h"
#include "camera.h"

// Define window dimensions
const GLuint SCR_WIDTH = 800;
const GLuint SCR_HEIGHT = 600;

int main()
{
    // Initialize GLFW
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Configure GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create a GLFW window object
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Your Game Title", NULL, NULL);
    if (window == NULL)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    
    // Make the context of the window the current one
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    if (glewInit() != GLEW_OK)
    {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        return -1;
    }

    // Set viewport size
    glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

    // Enable depth testing
    glEnable(GL_DEPTH_TEST);

    // Define the camera
    Camera camera(glm::vec3(0.0f, 0.0f, 3.0f));

    // Load shaders
    Shader ourShader("/home/yanjun/Documents/Lectures/FSF 3565 C++ for computing/game/vertex_shader.vs", "/home/yanjun/Documents/Lectures/FSF 3565 C++ for computing/game/fragment_shader.fs");

    // Load model
    Model ourModel("/home/yanjun/Documents/Lectures/FSF 3565 C++ for computing/game/3d_model.obj");

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Input handling
        // Update camera positions, etc.

        // Rendering
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Set up view and projection matrices
        glm::mat4 view = camera.GetViewMatrix();
        glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
        ourShader.use();
        ourShader.setMat4("view", view);
        ourShader.setMat4("projection", projection);

        // Draw the model
        glm::mat4 model = glm::mat4(1.0f); // Identity matrix
        ourShader.setMat4("model", model);
        ourModel.Draw(ourShader);

        // Swap buffers and poll events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Clean up GLFW
    glfwTerminate();
    return 0;
}
