////
//// Created by Scarlett PAJEO on 4/19/18.
////
///
//
//
////
////void ft_flag_pos(t_lst *head)
////{
////	t_lst *tmp;
////
////	tmp = head->next;
////	while (tmp != head)
////	{
////		if (!(PILE(tmp)->pos & PSF_ABSPOS)
////		            && ft_is_abspos_is_relpos(head, &ft_get_tpile_data, tmp))
////		{
////			PILE(tmp)->pos |= PSF_ABSPOS;
////		}
////		tmp = tmp->next;
////	}
////	tmp = head->next;
////	while (tmp != head->prev)
////	{
////		if (!(PILE(tmp)->pos & PSF_RELPOSNEXT)
////		    && ft_arerelpos_next(tmp, &ft_get_tpile_data, tmp->next, &ft_get_tpile_data))
////		{
////			PILE(tmp)->pos |= PSF_RELPOSNEXT;
//		}
//		tmp = tmp->next;
//	}
//}
//








//
//
///*
//** Add a set for position
//*/
//
//void			ft_organise_around_pivot_b()
//{
//	int		pivot;
//	int		nb = 0;
//
//	while (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_pos, 1)))
//	{
//		if (ft_is_lst_desc(&HEAD_LA, &ft_get_tpile_data))
//			return;
//		while (!(JUST_HEAD(HEAD_LB)) && !(ft_is_ref_inf(&HEAD_LB, &ft_get_tpile_pos, 1)))
//		{
//			TESTSTR("pivot B","REFILL");
//			ft_ps_print();
//			ft_refill_b(ft_getabspos_fromvar(&HEAD_LB, &ft_get_tpile_pos, 0)); //trouver la limite// autre fonction
//		}
//		if (!(JUST_HEAD(HEAD_LB)))
//		{
//			while (PILE(HEAD_LB.next)->pos > 0)
//			{
//				ft_ps_operations("pb");
//			}
//			pivot = PILE(HEAD_LB.next)->data;
//			PILE(HEAD_LB.next)->pos = 1;
//			ft_ps_operations("pb");
//			ft_ps_operations("ra");
//			while ((ft_is_ref_inf(&HEAD_LB, &ft_get_tpile_data, pivot)))
//			{
//				if (PILE(HEAD_LB.next)->data < pivot)
//				{
//					ft_ps_operations("pb");
//				}
//				else
//				{
//					ft_ps_operations("rb");
//					++nb;
//				}
//			}
//				while (nb != 0)
//				{
//					ft_ps_operations("rrb");
//					--nb;
//				}
//			ft_ps_operations("rra");
//		}
///*
//*/
//	}
//}
//
//int			ft_organise_around_pivot_a()
//{
//	int		pivot;
//	int		nb = 0;
//
//	if (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_pos, 1)))
//	{
//		ft_refill_a(ft_lst_count(&HEAD_LB));
////		ft_flagis_abspos(&HEAD_LA);
//	}
//	while (PILE(HEAD_LA.next)->pos == 1)
//	{
//		ft_ps_operations("pa");
//	}
//	pivot = PILE(HEAD_LA.next)->data;
//	PILE(HEAD_LA.next)->pos = 1;
//	ft_ps_operations("pa");
//	ft_ps_operations("rb");
//	while ((ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_data, pivot)))
//	{
//		if (PILE(HEAD_LA.next)->data < pivot)
//		{
//			ft_ps_operations("pa");
//		}
//		else
//		{
//			ft_ps_operations("ra");
//			++nb;
//		}
//	}
//		while (nb != 0)
//		{
//			ft_ps_operations("rra");
//			--nb;
//		}
//	ft_ps_operations("rrb");
//	if (!(ft_is_ref_inf(&HEAD_LA, &ft_get_tpile_pos, 1)))
//	{
//		ft_refill_a(ft_lst_count(&HEAD_LB));
//	}
//	return (1);
//}
