# ABMLangBenchmarks

Trying to assess the difference in performance across languages/platforms of a fairly standard and simple economic ABM.

## Model:

A simple econophysics-like model: random agent pairs exchange random sums of money. The structure of the models is extensible: any number of assets can be added.

## Implementation technique:

I'm implementing two versions of the same model: 'centralized'; 'decentralized'.

### Centralized version
In this version there is a single class (central register) that holds all the information about the agents. Agents themselves call the 'central register' to know and manipulate their holdings.

### Decentralized version
In this version each agent keeps account of his holdings. A 'central register' class exists for the sole purpose of holding a list of references of all existing agents and items. Agents may call the 'central register' to get those lists.

## Benchmarking technique:

The model is implemented in the same way (as best as I can) across different languages/platforms. 

## Results (so far):

### Centralized version

Num agents: 10000; Time steps: 1000:

Pyhton: 2082" (or 34.7') (347x)

Java: 59" (9.83x)

C++: 6" (1x)

### Decentralized version

Num agents: 100000; Time steps: 1000:

Python: NA

Java: 20"

C++: NA

## Comments

The difference between languages is significant and can impact the feasibility of some scientific endeavors (like calibration). A decentralized version seems to be much faster than a centralized one (due to the sparsity of the matrix that keeps the accounts for all agents-items).
