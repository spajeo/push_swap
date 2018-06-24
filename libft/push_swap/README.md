# Push Swap

* [Commands](#commands)
* [Algorithm](#algorithm)
* [Instructions](#instructions)
* [Shortening Moves](#shortening)

## Commands

> ARG="4 67 3 87 23";./push_swap $ARG | ./checker $ARG

> ./push_swap -v 2 6 3 5 7 1 4 | ./checker 2 6 3 5 7 1 4

> ./push_swap -x 2 6 3 5 && ./checker -x  2 6 3 5

> ./push_swap -v -x 2 6 3 5 && ./checker -x  2 6 3 5

#### Generate randon list from -100 to 100

```
ruby -e "puts (-100..100).to_a.shuffle.join(' ')"
```


## Algorithm


The function is **recursive**.

* Node splits the unordered elements left on the top of the pile in halfs in each piles. 
	*	from [A] pushes the elements <= the median on [B]
	*	from [B] pushes the elements >  the median on [A]
* Leaves only contain 3 or less values and are ordered. If on pile [B], values are re-pushed in pile [A]. Afterward the function returns.

### e.g. 

for 24 elements

###### Path
```
                                 [A]                    (n) step n 
                                 / \                    [x] pile x  
                                /   \                  
                               /     \
                              /       \
                             /         \
                           (1)         (8)
                           /             \
                          /               \
                         /                 \
                        /                   \
                       /                     \
                     [A]                     [B]
                     / \                     / \
                    /   \                   /   \
                  (2)   (5)               (9)   (10)
                  /       \               /       \
                 /         \             /         \
               [A]         [B]         [A]         [B] 
               / \         / \         / \         / \    
             (3) (4)     (6) (7)    (11) (12)   (13) (14)  
             /     \     /     \     /     \     /     \    
           [A]     [B] [A]     [B] [A]     [B] [A]     [B]   <== each pile ==> [len <= 3]
            
            
```


```
	 * * * *   unordered values 
	 ° ° ° °   ordered values 
	 _______
	|       |    
	|       | piles/subpile's depth 
	|_______|
```


####		**INITIAL POSITION**



```
	  PILE A	  PILE B
	 _________ 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	| * * * * | 
	|_________| 	__________ 
	
```

###		**STEP 1**

```
	  PILE A	  PILE B
	 _________ 	 _________
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	|_________|	|_________|

VALUES A > VALUES B
```

###		**STEP 2**

```
	  PILE A	  PILE B
	            	 _________
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * |
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	 _________	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	|_________|	|_________|

VALUES A > VALUES B
```

###		**STEP 3**

```
	  PILE A	  PILE B
	            	 _________
	           	| * * * * | 
	           	| * * * * | 
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * |
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	 _________ 	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B
```

*Sorting SUBPILE [A]*

```
	  PILE A	  PILE B
	            	 _________
	           	| * * * * | 
	           	| * * * * | 
	           	|_________| 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * |
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	 _________ 	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B
```

###		**STEP 4**

*Sorting Pile [B]*
 
```
	  PILE A	  PILE B
	           	 _________
	           	| ° ° ° ° | 
	           	| ° ° ° ° |
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	 _________ 	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B
```

*PA*

```
	  PILE A	  PILE B
	           	 _________ 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	           	|_________|
	           	| * * * * | 
	           	| * * * * | 
	           	| * * * * | 
	 _________	| * * * * |
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B

```

###		**STEP 5**
*PA*

```
	  PILE A	  PILE B
	           	 _________
	           	| * * * * | 
	           	| * * * * | 
	           	|_________|
	 _________	| * * * * | 
	| * * * * |	| * * * * | 
	| * * * * |	| * * * * | 
	|_________|	| * * * * |
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B
```

###		**STEP 6**


*Sorting Pile [A]*

```
	  PILE A	  PILE B
	           	 _________ 
	           	| * * * * | 
	           	| * * * * | 
	           	|_________|
	 _________ 	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	| * * * * |
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|
VALUES A > VALUES B
```

###		**STEP 7**
*Sorting Pile [B]*

```
	  PILE A	  PILE B
	           	 _________
	           	| ° ° ° ° | 
	           	| ° ° ° ° | 
	           	|_________|
	           	| * * * * | 
	 _________	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	|_________|	|_________|

VALUES A > VALUES B
```

*PA*

```
	  PILE A	  PILE B
	           
	 _________	 _________ 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	| ° ° ° ° |	| * * * * | 
	 _________ 	 _________ 

VALUES A > VALUES B
```


## Shortening Moves

1. While dividing the pile, stop moving up the values if the ones left are going to stay in the pile

