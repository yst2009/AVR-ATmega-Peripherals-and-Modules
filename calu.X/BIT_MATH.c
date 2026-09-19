#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(REG,BIT) (REG |= (1<<BIT))
#define CLR_BIT(REG,BIT) (REG &= ~(1<<BIT))
#define TOGGLE_BIT(REG,BIT) (REG ^= (1<<BIT))
#define GET_BIT(REG,BIT) ((REG >> BIT) & 1)
#define TOG_BIT(REG, PIN) (REG ^= (1 << PIN))
#endif