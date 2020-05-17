2021 Robotics Drive PseudoCode

int curLR
int curUD
int prevLR
int prevUD
int deltaLR
int deltaUD
int slewLim
maxSlewRate = 1000 //percentage points/PseudoCode
int triggerslew
get leftstick
get rightstick
int upperThrottleLimit = 100;
int lowerThrottleLimit = 100;
int leftThrottleCommand = 0;
int rightThrottleCommand = 0;

//GETCOMMANDS SEC --------------------------------------
get overall command mode from master loop

case 1: driver input command  //Left stick up down is for gross throttle commands ||  LR is for turning modifier
case 2: target camera input commands  //left stick controls throttle position || LR is camera offcenter commands LR
case 3: ball camera input commands  //left stick controls throttle position || LR is camera offcenter commands LR



//control function -----------------------------
37X^2*logX


//value chopping -----------------------------
if leftThrottleCommand >=upperThrottleLimit)
{
    leftThrottleCommand = upperThrottleLimit
}
elif leftThrottleCommand<lowerThrottleLimit)
{
    leftThrottleCommand = lowerThrottleLimit
}
if rightThrottleCommand >=upperThrottleLimit)
{
    rightThrottleCommand = upperThrottleLimit
}
elif rightThrottleCommand<lowerThrottleLimit)
{
    rightThrottleCommand = lowerThrottleLimit
}

//modifiers -----------------------------------

//SLEWLIMITING ------------------------------
if deltaLR >=slewLim)
{
    throttlecommand = upperThrottleLimit
}
