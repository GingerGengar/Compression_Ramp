Tracked Quantities
    Mach Number
        Mach Number is important because it informs the oblique shock wave angle
    Static Pressure
        It is important to know the static pressure at the start of the compression cowl and the static pressure at the end of the cowl so that we can determine stagnation pressure loss using the isentropic solutions and that is an important design performance metric
    Static Temperature
        Potentially useful when considering the inlet to the compressor and combustor

Algorithm Plan:
    Have an initial position in x and y
    Have the coordinates of the cowl
    Have an end horizontal distance for how long the cowl has to be
    Loop from the initial position to the final horizontal distance
        Find the gradient of the line between the cowl and the current position
        Determine Wave angle of the resulting shock wave
        Compute the turn angle of the ramp
        Compute the Mach number normal to shock
        Use Shock Jump relations for Mach number and all relevant quantities
        Compute new direction of flow
        Take one small "step" forward assuming straight line

Programming Standards:
    Do not use printf for printing. Let us all be consistent and use iostream and their inherited class system
    Do not edit main directly or tamper with the variable declarations. Do your individual testing in "Testing"
    Do not use "using namespace as std" instead spell out std:: this is to avoid ambiguity in namespaces

