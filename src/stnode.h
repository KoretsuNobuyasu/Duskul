/* Duskul version 0.1.1,  2018.03.13,   Takeshi Ogihara, (C) 2018 */
#if !defined(__STNODE_H__)
#define __STNODE_H__

#include "commontype.h"

typedef enum {//追加部
    node_assign, node_call, node_print, node_input,
    node_break, node_return, node_if, node_while, node_for, node_loop
} nodetype;

typedef struct _stnode {
    struct _stnode *next;
    unsigned char  kind;    // nodetype、上のいずれか
    unsigned short count;   // the number of args / vars、print、call文の数が入っている?使わない場合もある。
} stnode;
//構文ぎのノードを作る、比較的線形リストのようになっている

#endif /* !__STNODE_H__ */
