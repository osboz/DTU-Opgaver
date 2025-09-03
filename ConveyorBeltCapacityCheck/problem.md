# Conveyor belt capacity check

## Problem
:::{commons-figure} https://commons.wikimedia.org/wiki/File:Belt-conveyor-handling2.jpg
:align: right
:figwidth: 40%
A conveyor belt
:::
You are going to help automation engineers in your company to determine whether a conveyor belt system can safely transport a collection of packages.

The system can be supported by any number of motors. Every motor is able to carry  5.6 kg of package weight.

Prompt the user for the number of motors by asking:
<div width="50%">
> How many motors are carrying the packages?
</div>

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


:::{activity}
:label: conveyor-belt-capacity-check-flowchart
Draw a flowchart for this problem.

Steps:
1. 3 min work individually
2. 2 min compare your result with your partner
:::

:::{activity}
:label: conveyor-belt-capacity-check-intro
Create a project called `ConveyorBeltCapacityCheck` that solves this problem.

First create a Git repository and put your flowchart from {ref}`conveyor-belt-capacity-check-flowchart`, because you will upload your project to a code forge and submit it later as an assignment.

Start sketching the program, but you are not expected to finish it. Rather answer the question: Which C# programming components can we use from our existing knowledge, what do we need to know?

Steps:
1. 10 min work individually
2. 2 min discuss with your partner

You will later continue this problem.
:::