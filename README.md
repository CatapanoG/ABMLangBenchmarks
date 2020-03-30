# ABMLangBenchmarks
ABM language benchmarking

## Model:

A simple econophysics-like model: random agent pairs exchange random sums of money.

## Implementation technique:

In this version there is a single class (central register) that holds all the information about the agents. Agents themselves call the 'central register' to know and manipulate their holdings.

## Benchmarking technique:

The model is implemented in the same way (as best as I can) across different languages/platforms. 

## Results (so far):

Num agents: 10000; Time steps: 1000:

Pyhton: 1hr+ (never finished)

Java: 59secs

C++: 6secs
