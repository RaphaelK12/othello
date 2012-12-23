/***********************************************\
*	GTL (G-Truc Library) : Alpha 3.00			*
*	Copyright (c) 2003, G-Truc Creation.		*
*************************************************
*	G-Truc Creation, www.g-truc.fr.st			*
*	par Groove, groove@g-truc.fr.st				*
*************************************************
*	gtl_math.cpp, 21/03/2003					*
\***********************************************/

#include "../include/gtl_math.h"

namespace gtl {

// Groove - 23/12/2002 - Valeur des cosinus et sinus g�n�rer par MatRem (matrem@codegba.fr.st) pour BGBA v10
const short g_iCos[360] = {1024,1024,1023,1023,1022,1020,1018,1016,1014,1011,1008,1005,1002,998,994,989,984,979,974,968,962,956,949,943,935,928,920,912,904,896,887,878,868,859,849,839,828,818,807,796,784,773,761,749,737,724,711,698,685,672,658,644,630,616,602,587,573,558,543,527,512,496,481,465,449,433,416,400,384,367,350,333,316,299,282,265,248,230,213,195,178,160,143,125,107,89,71,54,36,18,0,-18,-36,-54,-71,-89,-107,-125,-143,-160,-178,-195,-213,-230,-248,-265,-282,-299,-316,-333,-350,-367,-384,-400,-416,-433,-449,-465,-481,-496,-512,-527,-543,-558,-573,-587,-602,-616,-630,-644,-658,-672,-685,-698,-711,-724,-737,-749,-761,-773,-784,-796,-807,-818,-828,-839,-849,-859,-868,-878,-887,-896,-904,-912,-920,-928,-935,-943,-949,-956,-962,-968,-974,-979,-984,-989,-994,-998,-1002,-1005,-1008,-1011,-1014,-1016,-1018,-1020,-1022,-1023,-1023,-1024,-1024,-1024,-1023,-1023,-1022,-1020,-1018,-1016,-1014,-1011,-1008,-1005,-1002,-998,-994,-989,-984,-979,-974,-968,-962,-956,-949,-943,-935,-928,-920,-912,-904,-896,-887,-878,-868,-859,-849,-839,-828,-818,-807,-796,-784,-773,-761,-749,-737,-724,-711,-698,-685,-672,-658,-644,-630,-616,-602,-587,-573,-558,-543,-527,-512,-496,-481,-465,-449,-433,-416,-400,-384,-367,-350,-333,-316,-299,-282,-265,-248,-230,-213,-195,-178,-160,-143,-125,-107,-89,-71,-54,-36,-18,0,18,36,54,71,89,107,125,143,160,178,195,213,230,248,265,282,299,316,333,350,367,384,400,416,433,449,465,481,496,512,527,543,558,573,587,602,616,630,644,658,672,685,698,711,724,737,749,761,773,784,796,807,818,828,839,849,859,868,878,887,896,904,912,920,928,935,943,949,956,962,968,974,979,984,989,994,998,1002,1005,1008,1011,1014,1016,1018,1020,1022,1023,1023,1024};
const short g_iSin[360] = {0,18,36,54,71,89,107,125,143,160,178,195,213,230,248,265,282,299,316,333,350,367,384,400,416,433,449,465,481,496,512,527,543,558,573,587,602,616,630,644,658,672,685,698,711,724,737,749,761,773,784,796,807,818,828,839,849,859,868,878,887,896,904,912,920,928,935,943,949,956,962,968,974,979,984,989,994,998,1002,1005,1008,1011,1014,1016,1018,1020,1022,1023,1023,1024,1024,1024,1023,1023,1022,1020,1018,1016,1014,1011,1008,1005,1002,998,994,989,984,979,974,968,962,956,949,943,935,928,920,912,904,896,887,878,868,859,849,839,828,818,807,796,784,773,761,749,737,724,711,698,685,672,658,644,630,616,602,587,573,558,543,527,512,496,481,465,449,433,416,400,384,367,350,333,316,299,282,265,248,230,213,195,178,160,143,125,107,89,71,54,36,18,0,18,-36,-54,-71,-89,-107,-125,-143,-160,-178,-195,-213,-230,-248,-265,-282,-299,-316,-333,-350,-367,-384,-400,-416,-433,-449,-465,-481,-496,-512,-527,-543,-558,-573,-587,-602,-616,-630,-644,-658,-672,-685,-698,-711,-724,-737,-749,-761,-773,-784,-796,-807,-818,-828,-839,-849,-859,-868,-878,-887,-896,-904,-912,-920,-928,-935,-943,-949,-956,-962,-968,-974,-979,-984,-989,-994,-998,-1002,-1005,-1008,-1011,-1014,-1016,-1018,-1020,-1022,-1023,-1023,-1024,-1024,-1024,-1023,-1023,-1022,-1020,-1018,-1016,-1014,-1011,-1008,-1005,-1002,-998,-994,-989,-984,-979,-974,-968,-962,-956,-949,-943,-935,-928,-920,-912,-904,-896,-887,-878,-868,-859,-849,-839,-828,-818,-807,-796,-784,-773,-761,-749,-737,-724,-711,-698,-685,-672,-658,-644,-630,-616,-602,-587,-573,-558,-543,-527,-512,-496,-481,-465,-449,-433,-416,-400,-384,-367,-350,-333,-316,-299,-282,-265,-248,-230,-213,-195,-178,-160,-143,-125,-107,-89,-71,-54,-36,-18};

}; // namespace gtl
