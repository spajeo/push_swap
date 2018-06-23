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

### **Manipulate or read a value from a node**
1. **use a get function to reach the value through its lst address** 
* `ft_get_lst_from_int.c`
* `ft_get_tdata_data.c` 
* `ft_get_tpile_data.c`
* `ft_get_tpile_pos.c`
* `ft_get_tstr_str.c`

#### e.g. 
	ft_get_tst_str.c
eads str from the structure t_str

```
typedef struct      s_str
{
     char    *str;
     t_lst   lst;
               t_str;
}
```


### Create a new Structure

Develop a new `get_` function wich will provide you with 

### Lexic

* __`relpos`__: as **relative position** indicates the position of the variable in the list *if the list were ordered*.
* __`abspos`__: as  **rabsolute position** indicates the position of the variable in the list.

* __`get`__: as in __`ft_get`xxxxxxxxx.c__. The following value indicates the **returned** values.  
* __`from`__: as in `ft_getxxx_`**`from`**xxxxx.c. The following value indicates the **variable**.
  * **e.g.** __`ft_getabspos_fromlst.c`__  is going to return the position of a node in the list from its lst value
  
* __`is`__ : as in ft_isinformation.c returns boolean indicating whether a value is **information**
* __`are`__ : returns boolean about the whole list status
* __`btw`__ :
* __`ft_lstxxx`__: as in ft_lst_swap get only lst as variables

###### e.g.
ft_getval_fromabspos.c
ft_is_val_in.c



## Technical Explaination

Sources :
- [article fr](http://a.michelizza.free.fr/pmwiki.php?n=TutoOS.Linkedlist)
- [Torvalds github](https://github.com/torvalds/linux/blob/master/include/linux/list.h)

## Next Step
