main: main.o Canvas.o Memento.o Shape.o Rectangle.o RectangleFactory.o Square.o SquareFactory.o Textbox.o TextboxFactory.o ExportCanvas.o PDFExporter.o PNGExporter.o ShapeStore.o ShapeFactory.o
	g++ -o main main.o Canvas.o Memento.o Shape.o Rectangle.o RectangleFactory.o Square.o SquareFactory.o Textbox.o TextboxFactory.o ExportCanvas.o PDFExporter.o PNGExporter.o ShapeStore.o ShapeFactory.o

main.o: main.cpp Canvas.h Memento.h ShapeFactory.h RectangleFactory.h SquareFactory.h TextboxFactory.h ExportCanvas.h PDFExporter.h PNGExporter.h ShapeStore.h ShapeFactory.h
	g++ -c main.cpp

Canvas.o: Canvas.cpp Canvas.h Memento.h Shape.h ShapeFactory.h
	g++ -c Canvas.cpp

Memento.o: Memento.cpp Memento.h Shape.h Canvas.h
	g++ -c Memento.cpp

Shape.o: Shape.cpp Shape.h
	g++ -c Shape.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Shape.h
	g++ -c Rectangle.cpp

RectangleFactory.o: RectangleFactory.cpp RectangleFactory.h Rectangle.h Shape.h
	g++ -c RectangleFactory.cpp

Square.o: Square.cpp Square.h Shape.h
	g++ -c Square.cpp

SquareFactory.o: SquareFactory.cpp SquareFactory.h Square.h Shape.h
	g++ -c SquareFactory.cpp

Textbox.o: Textbox.cpp Textbox.h Shape.h
	g++ -c Textbox.cpp

TextboxFactory.o: TextboxFactory.cpp TextboxFactory.h Textbox.h Shape.h
	g++ -c TextboxFactory.cpp

ExportCanvas.o: ExportCanvas.cpp ExportCanvas.h Canvas.h
	g++ -c ExportCanvas.cpp

PDFExporter.o: PDFExporter.cpp PDFExporter.h ExportCanvas.h Canvas.h
	g++ -c PDFExporter.cpp

PNGExporter.o: PNGExporter.cpp PNGExporter.h ExportCanvas.h Canvas.h
	g++ -c PNGExporter.cpp

run: main
	./main

clean:
	rm -f *.o main