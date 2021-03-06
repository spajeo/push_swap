![Linked List](http://a.michelizza.free.fr/uploads/TutoOS/list_linux.png)

## Advantages

* Extreme modularity of the librairy.
* No re-coding everytime you have to manipulate a new structure for preset structure.
* One head to connect differents lists and hold extra informations
* Different structures in the same list

## How to use it

### **Move a node**

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

### **Read or manipulate a value from a node**
1. **use a get function to reach the value through its lst address** 
* `ft_get_lst_from_int.c`
* `ft_get_tdata_data.c` 
* `ft_get_tpile_data.c`
* `ft_get_tpile_pos.c`
* `ft_get_tstr_str.c`

#### e.g. `ft_get_tpile_data.c`
get the var `data` from the structure `t_data`

```C
 t_pile
{
 ====>	int         data;
		t_lst		lst;
}
```

```C
int		*ft_get_tpile_data(t_lst *ptr)
{
	return (&((t_pile *)((char *)(ptr) - ((char *)(&(((t_pile *)0))->lst))))->data);
}
```


2. **Go through or modify a list**

Use the main function and pass as a variable the needed `ft_get` function to point at the needed value in the structure.
#### e.g. find the max value is a list of `t_data` nodes.

```
max_val = ft_getlst_maxval(head->t_lst, get_tpile_data)

```

### Create a new Structure

Develop a new `get_` function wich will provide you with 

```C
 STRUCTURE
{
		type        VARIABLE;
		t_lst		lst;
}
```

```C
int		*ft_get_STRUCTURE_VARIABLE(t_lst *ptr)
{
	return (&((STRUCTURE *)((char *)(ptr) - ((char *)(&(((STRUCTURE *)0))->lst))))->VARIABLE);
}
```
Now on you can manipulate the content of the structure.


### Lexic

* __`relpos`__: as **relative position** indicates the position of the variable in the list *if the list were ordered*.
* __`abspos`__: as  **rabsolute position** indicates the position of the variable in the list.

* __`get`__: as in __`ft_get`xxxxxxxxx.c__. The following value indicates the **returned** values.  
* __`from`__: as in `ft_getxxx_`**`from`**xxxxx.c. The following value indicates the **variable**.
  
* __`is`__ : as in ft_isinformation.c returns boolean indicating whether a value is **information**
* __`are`__ : returns boolean about the whole list status
* __`btw`__ : between
* __`asc`__ : ascending
* __`desc`__ : descending
* __`ft_lstxxx`__: as in ft_lst_swap get only lst as variables

#### e.g.
  * __`ft_getabspos_fromlst.c`__  is going to return the position of a node in the list from its lst value
* __`ft_islst_asc`__ whether or not in a list of nodes a specific variable in the structure is in ascending order
* __`ft_is_abspos_is_relpos`__ if a node has its absolute position and relative position align
* __`ft_getrelpos_fromlstval`__ returns the relative position of a specific variable from a structure in a list
* __`ft_arerelpos_next`__ checks if the relative position of a first structures' values is inferior to a second structures's value
* __`ft_lst_convert_allvar`__ attributes a value the the whole structures's variables in the list
* __`ft_getlst_fromrelpos`__ returns the t_lst lst from a requested relative position




## Technical Explaination

Sources :
- [article fr](http://a.michelizza.free.fr/pmwiki.php?n=TutoOS.Linkedlist)
- [Torvalds github](https://github.com/torvalds/linux/blob/master/include/linux/list.h)

## Next Step
