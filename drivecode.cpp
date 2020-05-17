2021 Robotics Drive PseudoCode




get leftstick
get rightstick

control function -----------------------------
37X^2*logX


value chopping -----------------------------
if throttlecommand >=upperThrottleLimit)
{
    throttlecommand = upperThrottleLimit
}
elif throttlecommand<lowerThrottleLimit)
{
    throttlecommand = lowerThrottleLimit
}

modifiers -----------------------------------
maxSlewRate = 1000 //percentage points/PseudoCode
