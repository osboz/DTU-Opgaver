# Conveyor belt capacity check

## Problem
You are going to help automation engineers in your company to determine whether a conveyor belt system can safely transport a collection of packages.
The system can be supported by any number of motors. Every motor is able to carry  5.6 kg of package weight.
Prompt the user for the number of motors by asking:

> How many motors are carrying the packages?

Then, prompt the user for the weight of packages:
> How many kg of packages do we expect?

Do not forget to convert the input values to numeric types.

If the total package weight divided by the number of motors is less or equal  than 5.6 (including), then print:
> Yes! The conveyor belt can carry the packages.

Otherwise:
> No. The conveyor belt cannot carry the packages.

Samples:

```
How many motors are carrying the packages? 3
How many kg of packages do we expect? 10
Yes! The conveyor belt can carry the packages.
```
```
How many motors are carrying the packages? 2
How many kg of packages do we expect? 20.4
> No. The conveyor belt cannot carry the packages.
```

Draw a flowchart for this problem.
[Flowchart](flowchart.png)
