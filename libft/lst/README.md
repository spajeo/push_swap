![Linked List](http://a.michelizza.free.fr/uploads/TutoOS/list_linux.png)

## Advantages

* Extreme modularity of the librairy.
* No re-coding everytime you have to manipulate a new structure for preset structure.
* One head to connect differents lists and hold extra informations
* Different structures in the same list

## How to use it

1 . to move a node
Use the `ft_lst`xxxx : 
* `ft_lst_swap.c`
* `ft_ps_order_3a` 
 * `ft_lstadd.c` 
* `ft_lstdisconnect.c` 
* `ft_lstinsert_after.c` 
* `ft_lstinsert_before.c` 
* `ft_lstiter.c` 
* `ft_lstmap.c` 
* `ft_lstmv_after.c` 
* `ft_lstmv_before.c` 
* `ft_lst_count.c`

1 . to manipulate or read a value from a node
1.1. use 




### Create a new Structure

Develop a new `get_` function wich will provide you with 


### Technical Explaination

Sources :
- [article fr](http://a.michelizza.free.fr/pmwiki.php?n=TutoOS.Linkedlist)
- [Torvalds github](https://github.com/torvalds/linux/blob/master/include/linux/list.h)

### Lexic

* `relpos`: as **relative position** indicates the position of the variable in the list *if the list were ordered*.
* `abspos`: as  **rabsolute position** indicates the position of the variable in the list.

* `get`: as in `ft_get`xxxxxxxxx.c. The following value indicates the **returned** values.  
* `from`: as in ft_getxxx_**from**xxxxx.c. The following value indicates the **variable**.
  * **e.g.** __`ft_getabspos_fromlst.c`__  is going to return the position of a node in the list from its lst value
  
* `is` : as in ft_isinformation.c returns boolean indicating whether a value is **information**
* `are` : returns boolean about the whole list status
* `btw` :
* `ft_lstxxx`: as in ft_lst_swap get only lst as variables

###### e.g.
ft_getval_fromabspos.c
ft_is_val_in.c


## Next Step
