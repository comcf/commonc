# C# to Common C
## THE LANGUAGE to rule them all!

There is too many C dialects. The goal is to create a truly platform independent superset of C2x, that unites the best of the various dialects with the ease of _C#_ and the intentions of Objective-C without the .NET runtime

It is a minor library called _Common C_ will be from _C#_, _C++_, _Objective-C_, _Object Pascal_, Comal80 etc. to even out the differences between _C#_ and _C_.

In a perfect world _C# code_ could be compiled with a _C compiler_, but this is not yet possible. In time _Common C_ might be the favoured programming language for beginners and experienced programmers.

## Key differences between C# and C
- _C_ has no `string` or `byte` keywords
- _C_ has no `namespaces`
- _C_ is not __Object Oriented Programming__ (OOP) 
- _C_ has no _garbage collection_
- _C_ has pointers, which is considered _unsafe code_ in _C#_

## Common C
- adds `string` (from `char *`)
- adds `byte` (from `uint8_t`)
- adds `int8`, `int16`, `int32` & `int64` (from `int8_t`, `int16_t`, `int32_t` & `int64_t`)
- adds `uint8`, `uint16`, `uint32` & `uint64` (from `uint8_t`, `uint16_t`, `uint32_t` & `uint64_t`)
- adds _legacy_ command `print()` (familiar from ALGOL, Pascal etc.) 
- use `printf()` instead of `Console.Write()`& `Console.WriteLine()`


## Intended improvements
- __Common C__ _Visual Studio Extension_ with templates
- _OOP_ and _namespaces_ in _Common C

## References

## Litterature
- Gookin, D. (2020). _C Programming For Dummies_ (2nd ed.). Hoboken, NJ: John Wiley & Sons, Inc.
- Kernighan, B. & Ritchie, D. (1988). _C Programming Language_ (2nd ed.). London: Pearson.
