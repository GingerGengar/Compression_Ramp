#List of all object files
Files = Gen_Rmp_Geo.o Geometry.o IO.o Init.o Main.o Shock.o Var_Setup.o

#Compiler Cho.cppe
Compiler = g++

#Compile Flags
Flags = -lm

#Final Binary
Exec: $(Files)
	@echo "Linking all Object Files"
	@$(Compiler) $(Flags) $(Files) -o Exec

Gen_Rmp_Geo.o: Gen_Rmp_Geo.cpp
	@echo "Building Gen_Rmp_Geo..."
	@$(Compiler) $(Flags) -o Gen_Rmp_Geo.o -c Gen_Rmp_Geo.cpp

Geometry.o: Geometry.cpp
	@echo "Building Geometry..."
	@$(Compiler) $(Flags) -o Geometry.o -c Geometry.cpp

IO.o: IO.cpp
	@echo "Building IO..."
	@$(Compiler) $(Flags) -o IO.o -c IO.cpp

Init.o: Init.cpp
	@echo "Building Init..."
	@$(Compiler) $(Flags) -o Init.o -c Init.cpp

Main.o: Main.cpp
	@echo "Building Main..."
	@$(Compiler) $(Flags) -o Main.o -c Main.cpp

Shock.o: Shock.cpp
	@echo "Building Shock..."
	@$(Compiler) $(Flags) -o Shock.o -c Shock.cpp

Var_Setup.o: Var_Setup.cpp
	@echo "Building Var_Setup..."
	@$(Compiler) $(Flags) -o Var_Setup.o -c Var_Setup.cpp

#sub.o: sub.cpp
#	@echo "Building sub..."
#	@$(Compiler) $(Flags) -o sub.o -c sub.cpp

clean:
	@echo "Removing Build Relics"
	@rm *.o
