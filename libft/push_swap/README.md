## Push Swap

## Algorithm


The function is **recursive**.

* Node splits the unordered elements left on the top of the pile in halfs in each piles. 
	*	from [A] pushes the elements <= the median on [B]
	*	from [B] pushes the elements >  the median on [A]
* Leaves only contain 3 or less values and are ordered. Afterward the function returns.

### e.g. 

for 24 elements

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
           [A]     [B] [A]     [B] [A]     [B] [A]     [B]   <== each pile ==> [len <= 4]
            
            
```



