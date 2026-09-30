# Root Cause Analysis

## Problem 1: Blocking delay() Calls

Why 1:
Why does the program stop during timing?
Because delay() pauses program execution.

Why 2:
Why does delay() pause execution?
Because Arduino waits for the specified delay period.

Why 3:
Why is this a problem?
Because other operations cannot execute during this period.

Why 4:
Why are other operations required?
Future embedded systems may use sensors, buttons or communication.

Why 5:
Why should the design support these operations?
To make the program more flexible and scalable.

Root Cause:
Use of blocking delay() for timing.

Solution:
Use millis()-based non-blocking timing.


## Problem 2: Timing Depends on delay() Execution

Why 1:
Why is timing dependent on delay()?
Because fixed delay() statements control the timing.

Why 2:
Why can this cause problems?
Additional processing can affect the actual execution time.

Why 3:
Why is flexible timing needed?
The system may need to perform other operations.

Root Cause:
Timing is implemented using blocking delay().

Solution:
Use millis() to check elapsed time.


## Problem 3: No Configurable Blink Interval

Why 1:
Why is the blink interval difficult to change?
Because the value 1000 is directly written in delay().

Why 2:
Why is this inconvenient?
The value may need to be changed in multiple places.

Root Cause:
The timing value is hardcoded.

Solution:
Use a BLINK_INTERVAL constant.


## Problem 4: Limited Scalability

Why 1:
Why is the design difficult to extend?
Because it uses blocking delay().

Why 2:
Why does blocking affect scalability?
Other operations must wait for the delay to finish.

Why 3:
Why is this important?
Embedded systems may need multiple independent tasks.

Root Cause:
Blocking timing design.

Solution:
Use non-blocking millis()-based state logic.
