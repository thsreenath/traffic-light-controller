/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/Resume Projects/TrafficLightController/traffic_light_controller.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static int ng11[] = {3, 0};
static int ng12[] = {1, 0};



static void Always_31_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4984);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB33:    if (t18 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB36:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 3496);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3336);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(41, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t28 = (t0 + 3336);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);

LAB19:    t31 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t31, 3);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB17;

LAB20:    xsi_set_current_line(44, ng0);

LAB29:    xsi_set_current_line(45, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 3496);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB28;

LAB22:    xsi_set_current_line(50, ng0);

LAB30:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB28;

LAB24:    xsi_set_current_line(56, ng0);

LAB31:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB28;

LAB26:    xsi_set_current_line(62, ng0);

LAB32:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB28;

LAB35:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(70, ng0);

LAB40:    xsi_set_current_line(71, ng0);
    t28 = (t0 + 3336);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);

LAB41:    t33 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 3, t33, 3);
    if (t32 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t32 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t32 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t31, 3, t2, 3);
    if (t32 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB42:    xsi_set_current_line(73, ng0);

LAB51:    xsi_set_current_line(74, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 3496);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB44:    xsi_set_current_line(79, ng0);

LAB52:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB46:    xsi_set_current_line(85, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3496);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

LAB48:    xsi_set_current_line(91, ng0);

LAB54:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3336);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB50;

}

static void Always_102_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5000);
    *((int *)t2) = 1;
    t3 = (t0 + 4696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);

LAB5:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 3336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(106, ng0);

LAB24:    xsi_set_current_line(107, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 2696);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 3);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB9:    xsi_set_current_line(114, ng0);

LAB25:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB11:    xsi_set_current_line(122, ng0);

LAB26:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB13:    xsi_set_current_line(130, ng0);

LAB27:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB15:    xsi_set_current_line(138, ng0);

LAB28:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB17:    xsi_set_current_line(146, ng0);

LAB29:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB19:    xsi_set_current_line(154, ng0);

LAB30:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB21:    xsi_set_current_line(162, ng0);

LAB31:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

}


extern void work_m_00000000004239967434_2745848787_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_102_1};
	xsi_register_didat("work_m_00000000004239967434_2745848787", "isim/traffic_light_controller_tb_isim_beh.exe.sim/work/m_00000000004239967434_2745848787.didat");
	xsi_register_executes(pe);
}
