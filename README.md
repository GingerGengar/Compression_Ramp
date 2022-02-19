Tracked Quantities
    Mach Number
        Mach Number is important because it informs the oblique shock wave angle
    Static Pressure
        It is important to know the static pressure at the start of the compression cowl and the static pressure at the end of the cowl so that we can determine stagnation pressure loss using the isentropic solutions and that is an important design performance metric
    Static Temperature
        Potentially useful when considering the inlet to the compressor and combustor

Loop Dependent Variables:
current position
current angle

old angle theta
new angle theta

Turn Angle of the Ramp
Gradient of the Ramp 

True Mach Number Before Shock
Mach Normal to Shock Before
Mach Nromal to Shock After
True Mach Number After Shock
dx

Needed Functionality:

Find Angle between two points
From Angle determine gradient
Given gradient and dl determine dx

Algorithm Plan:
    Have an initial position in x and y
    Have the coordinates of the cowl
    Have an end horizontal distance for how long the cowl has to be
    Loop from the initial position to the specified maximum iteration count
        Update Certain Input Variables
            Set the Mach number before shock as mach number after shock last iteration
            Set the old angle theta as the new angle theta from last iteration
        Find the angle of the line between the cowl and the current position
            update current angle
        Compute the Mach number normal to shock
            Use the Explicit Equation
            ipdate Mach Normal to Shock Before
        Use Shock Jump relations for normal Mach number and all relevant quantities
            Update Mach Normal to Shock After
        Compute the turn angle of the ramp
            Use Explicit Equation and plug in shock angle
            update turn angle of ramp
        Compute new true Mach number
            Update True Mach Number After Shock
        Find Gradient of current ramp
            new angle theta is the old + turn angle
            Use Basic Trigonometry to compute current gradient of ramp
            Update Value of the gradient of ramp
        Compute value of dx
            Update Value of dx
        Take one small "step" forward assuming straight line (update current position)
            From Gradient of the Ramp and current position,
                increment x by dx
                increment y by gradient*dx
        Log position and probably more quantities of interest

Programming Standards:
    Do not use printf for printing. Let us all be consistent and use iostream and their inherited class system
    Do not edit main directly or tamper with the variable declarations. Do your individual testing in "Testing"
    Do not use "using namespace as std" instead spell out std:: this is to avoid ambiguity in namespaces

