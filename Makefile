CXX = g++					
CXXFLAGS = -g -Wall -MMD -Werror=vla	

OBJECTS = resourceEnum.o colorEnum.o residenceEnum.o tile.o component.o player.o controller.o dice.o board.o model.o view.o controller.o main.o

DEPENDS = ${OBJECTS:.o=.d}			
EXEC = constructor					# executable name

.PHONY : clean					

${EXEC} : ${OBJECTS}				
	${CXX} ${CXXFLAGS} $^ -o $@

-include ${DEPENDS}				

clean :						
	rm -f ${DEPENDS} ${OBJECTS} ${EXEC}
