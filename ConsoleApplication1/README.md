# ProjectEuler197
https://projecteuler.net/problem=197 - Find a non-recursive solution to a recursive problem. This is not "documenting the theory behind this problem", but rather "documenting my approach to solving the problem".

## Basic approach
To the uninitiated, this is a seemingly-impossible problem. The initial idea to resort to literal brute force will not solve anything other than "how to take a thousand years to do anything of value." So, try to find an out and don't actually try brute force even just to get a hint of what the solution looks like, because _surely_ the mind's eye is superior here.

## Common solutions to recursive problems
I've done this before. Let's solve it with things like memoization or recurrence relations.
* Memoization
 * Doesn't work because the recursion only pertains to the previous term. This is basically an exponential fibonacci sequence, or so I thought.
* Recurrence relations.
 * Sparing the details, it's pretty hard to convert a floor function into something compatible with the definition of a recurrence relation because the definition of a recurrence relation requires a linear relationship between the function and calls to previous results of the function.

## We're getting desperate. Try brute force and see if there's a pattern.'
Okay, it looks like taking Discrete Mathematics doesn't make me into the modern Gauss. Let's just take every term of the sequence and print them as they're created in order up until a thousand. One can then see that the odd-numbered terms and even-numbered terms tend towards two different constant values. In other words, to solve the problem of the sum of the nth and (n+1)th terms, I simply add these two values together. This is a prime example of "the answer is in the printing of the problem".
