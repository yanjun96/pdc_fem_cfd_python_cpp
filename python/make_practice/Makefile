PDF = main.pdf
TEX = main.tex
FIG = figures/plot.pdf

$(PDF):$(TEX) $(FIG)
	pdflatex $(TEX)

$(FIG): figure.py
	python figure.py
