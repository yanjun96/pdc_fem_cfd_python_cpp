#include <GL/glut.h>

// Function to initialize the OpenGL environment
void init() {
    glClearColor(0.5, 0.5, 0.5, 1.0); // Set background color to gray
    glEnable(GL_DEPTH_TEST);          // Enable depth testing for z-culling
}

// Function to render a simple 3D house
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear the screen and depth buffer
    glLoadIdentity();                                  // Reset the view

    // Set the camera
    gluLookAt(0.0, 5.0, 10.0, // Eye position
              0.0, 0.0, 0.0,  // Look-at position
              0.0, 1.0, 0.0); // Up vector

    // Draw the base of the house (a simple cube)
    glBegin(GL_QUADS);

    // Front face
    glColor3f(1.0, 0.0, 0.0); // Red color
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);

    // Back face
    glColor3f(0.0, 1.0, 0.0); // Green color
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);

    // Top face
    glColor3f(0.0, 0.0, 1.0); // Blue color
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, -1.0);

    // Bottom face
    glColor3f(1.0, 1.0, 0.0); // Yellow color
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(1.0, -1.0, 1.0);
    glVertex3f(-1.0, -1.0, 1.0);

    // Left face
    glColor3f(1.0, 0.0, 1.0); // Magenta color
    glVertex3f(-1.0, -1.0, -1.0);
    glVertex3f(-1.0, -1.0, 1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(-1.0, 1.0, -1.0);

    // Right face
    glColor3f(0.0, 1.0, 1.0); // Cyan color
    glVertex3f(1.0, -1.0, -1.0);
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(1.0, -1.0, 1.0);

    glEnd();

    // Draw the roof of the house (a simple pyramid)
    glBegin(GL_TRIANGLES);

    // Front face
    glColor3f(1.0, 0.5, 0.0); // Orange color
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 2.0, 0.0);

    // Back face
    glColor3f(0.5, 0.25, 0.0); // Brown color
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(1.0, 1.0, -1.0);

    // Left face
    glColor3f(0.5, 0.0, 0.5); // Purple color
    glVertex3f(-1.0, 1.0, -1.0);
    glVertex3f(-1.0, 1.0, 1.0);
    glVertex3f(0.0, 2.0, 0.0);

    // Right face
    glColor3f(0.0, 0.5, 0.5); // Teal color
    glVertex3f(1.0, 1.0, -1.0);
    glVertex3f(0.0, 2.0, 0.0);
    glVertex3f(1.0, 1.0, 1.0);

    glEnd();

    glutSwapBuffers(); // Swap the front and back frame buffers (double buffering)
}

// Function to handle window resizing
void reshape(int w, int h) {
    glViewport(0, 0, w, h); // Set the viewport to cover the new window size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0); // Set the perspective projection
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // Enable double buffering and depth testing
    glutInitWindowSize(800, 600); // Set the window size
    glutCreateWindow("3D House"); // Create the window with a title

    init(); // Initialize the OpenGL environment

    glutDisplayFunc(display); // Set the display callback function
    glutReshapeFunc(reshape); // Set the reshape callback function

    glutMainLoop(); // Enter the GLUT event processing loop

    return 0;
}
