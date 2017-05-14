
/*  A Bison parser, made from nasl_grammar.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	FUNCTION	258
#define	EQ	259
#define	NE	260
#define	LT	261
#define	GT	262
#define	LE	263
#define	GE	264
#define	SEARCH_SUBSTR	265
#define	NOT_SEARCH_SUBSTR	266
#define	POWER	267
#define	ADD	268
#define	SUB	269
#define	MUL	270
#define	DIV	271
#define	MOD	272
#define	XOR	273
#define	OR	274
#define	OR_OP	275
#define	IF	276
#define	ELSE	277
#define	FOR	278
#define	FOREACH	279
#define	WHILE	280
#define	REPEAT	281
#define	UNTIL	282
#define	BREAK	283
#define	CONTINUE	284
#define	RETURN	285
#define	INCLUDE	286
#define	STR_FIRST	287
#define	ASSIGN	288
#define	RIGHT_ASSIGN	289
#define	RIGHT_RIGHT_ASSIGN	290
#define	LEFT_ASSIGN	291
#define	ADD_ASSIGN	292
#define	SUB_ASSIGN	293
#define	MUL_ASSIGN	294
#define	DIV_ASSIGN	295
#define	MOD_ASSIGN	296
#define	AND_ASSIGN	297
#define	XOR_ASSIGN	298
#define	OR_ASSIGN	299
#define	RIGHT_OP	300
#define	RIGHT_OP_3	301
#define	LEFT_OP	302
#define	INC_OP	303
#define	DEC_OP	304
#define	AND_OP	305
#define	AND	306
#define	SEMICOLON	307
#define	LEFT_BRACE	308
#define	RIGHT_BRACE	309
#define	COMMA	310
#define	COLON	311
#define	LEFT_PARENTHESIS	312
#define	RIGHT_PARENTHESIS	313
#define	LEFT_SQ_BRACKET	314
#define	RIGHT_SQ_BRACKET	315
#define	NOT	316
#define	BIT	317
#define	NOT_BIT	318
#define	ARROW	319
#define	ASSIGN_BIT	320
#define	INTEGER	321
#define	IF_1	322
#define	IDENTIFIER	323
#define	POINT	324
#define	LOCAL	325
#define	GLOBAL	326
#define	COMMENT	327

#line 1 "nasl_grammar.y"


#define YYERROR_VERBOSE 1
#define YYDEBUG 1
extern int yylineno;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		233
#define	YYFLAG		-32768
#define	YYNTBASE	73

#define YYTRANSLATE(x) ((unsigned)(x) <= 327 ? yytranslate[x] : 113)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    10,    12,    19,    20,    22,
    24,    28,    32,    35,    38,    40,    43,    45,    47,    49,
    51,    54,    57,    59,    62,    65,    68,    71,    74,    77,
    80,    82,    88,    96,    98,   100,   102,   104,   114,   123,
   129,   135,   142,   143,   145,   147,   149,   154,   156,   158,
   163,   164,   166,   168,   172,   174,   178,   182,   186,   190,
   194,   198,   202,   206,   210,   214,   216,   218,   220,   222,
   227,   229,   232,   235,   238,   241,   245,   249,   252,   256,
   260,   264,   267,   271,   275,   279,   283,   287,   291,   295,
   299,   301,   305,   309,   313,   317,   321,   325,   329,   333,
   337,   341,   345,   349,   351,   353,   355,   357,   359,   361,
   365,   367,   371,   373,   377,   379,   381,   383,   385,   387,
   389,   391,   399,   402
};

static const short yyrhs[] = {    -1,
    74,     0,    75,     0,    75,    74,     0,    81,     0,    76,
     0,     3,    68,    57,    77,    58,    79,     0,     0,    78,
     0,    98,     0,    98,    55,    78,     0,    53,    80,    54,
     0,    53,    54,     0,    81,    22,     0,    81,     0,    80,
    81,     0,    82,     0,    79,     0,    72,     0,    52,     0,
    96,    52,     0,   101,    52,     0,    92,     0,    83,    52,
     0,    91,    52,     0,   111,    52,     0,   112,    52,     0,
    28,    52,     0,    29,    52,     0,    30,   102,     0,    30,
     0,    21,    57,   102,    58,    81,     0,    21,    57,   102,
    58,    81,    22,    81,     0,    86,     0,    87,     0,    88,
     0,    89,     0,    23,    57,    90,    52,   102,    52,    90,
    58,    81,     0,    23,    57,    90,    52,    52,    90,    58,
    81,     0,    25,    57,   102,    58,    81,     0,    26,    81,
    27,   102,    52,     0,    24,    98,    57,   102,    58,    81,
     0,     0,    96,     0,   101,     0,    92,     0,    31,    57,
    32,    58,     0,    84,     0,    85,     0,    68,    57,    93,
    58,     0,     0,    94,     0,    95,     0,    94,    55,    95,
     0,   102,     0,    98,    56,   102,     0,    97,    33,   102,
     0,    97,    37,   102,     0,    97,    38,   102,     0,    97,
    39,   102,     0,    97,    40,   102,     0,    97,    41,   102,
     0,    97,    34,   102,     0,    97,    35,   102,     0,    97,
    36,   102,     0,    98,     0,    99,     0,    67,     0,    68,
     0,    98,    59,   100,    60,     0,   102,     0,    48,    97,
     0,    49,    97,     0,    97,    48,     0,    97,    49,     0,
    57,   102,    58,     0,   102,    50,   102,     0,    61,   102,
     0,   102,    20,   102,     0,   102,    13,   102,     0,   102,
    14,   102,     0,    62,   102,     0,   102,    16,   102,     0,
   102,    17,   102,     0,   102,    51,   102,     0,   102,    18,
   102,     0,   102,    19,   102,     0,   102,    45,   102,     0,
   102,    46,   102,     0,   102,    47,   102,     0,   101,     0,
   102,    15,   102,     0,   102,    12,   102,     0,   102,     5,
   102,     0,   102,     4,   102,     0,   102,     6,   102,     0,
   102,     7,   102,     0,   102,     8,   102,     0,   102,     9,
   102,     0,   102,    65,   102,     0,   102,    63,   102,     0,
   102,    10,   102,     0,   102,    11,   102,     0,   108,     0,
    96,     0,   110,     0,   106,     0,   103,     0,    79,     0,
    59,   104,    60,     0,   105,     0,   105,    55,   104,     0,
   107,     0,    32,    64,   107,     0,    32,     0,    66,     0,
   106,     0,   109,     0,    99,     0,    92,     0,    98,     0,
    66,    69,    66,    69,    66,    69,    66,     0,    70,    77,
     0,    71,    77,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    84,    86,    89,    91,    94,    98,    99,   102,
   104,   107,   109,   110,   113,   115,   118,   120,   121,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   136,
   138,   141,   143,   146,   148,   149,   150,   153,   155,   158,
   162,   166,   170,   171,   172,   173,   176,   180,   182,   183,
   186,   187,   189,   191,   194,   196,   199,   201,   202,   203,
   204,   205,   206,   207,   208,   211,   213,   216,   218,   221,
   225,   229,   231,   232,   233,   236,   237,   238,   239,   240,
   241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
   251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
   261,   262,   263,   264,   265,   266,   267,   268,   269,   272,
   276,   278,   281,   283,   288,   290,   294,   298,   300,   301,
   304,   308,   312,   316
};

static const char * const yytname[] = {   "$","error","$undefined.","FUNCTION",
"EQ","NE","LT","GT","LE","GE","SEARCH_SUBSTR","NOT_SEARCH_SUBSTR","POWER","ADD",
"SUB","MUL","DIV","MOD","XOR","OR","OR_OP","IF","ELSE","FOR","FOREACH","WHILE",
"REPEAT","UNTIL","BREAK","CONTINUE","RETURN","INCLUDE","STR_FIRST","ASSIGN",
"RIGHT_ASSIGN","RIGHT_RIGHT_ASSIGN","LEFT_ASSIGN","ADD_ASSIGN","SUB_ASSIGN",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"RIGHT_OP","RIGHT_OP_3","LEFT_OP","INC_OP","DEC_OP","AND_OP","AND","SEMICOLON",
"LEFT_BRACE","RIGHT_BRACE","COMMA","COLON","LEFT_PARENTHESIS","RIGHT_PARENTHESIS",
"LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET","NOT","BIT","NOT_BIT","ARROW","ASSIGN_BIT",
"INTEGER","IF_1","IDENTIFIER","POINT","LOCAL","GLOBAL","COMMENT","start","command_declaration_list",
"command_declaration","function_declaration","argument_declaration","first_argument_declaration",
"body","command_list","command","simple_command","ret","if_body","loop","for_loop",
"while_loop","repeat_loop","foreach_loop","aff_func","inc","function_call","argument_list",
"first_argument_list","argument","aff","lvalue","identifier","array_elem","array_index",
"post_pre_command","expression","const_array","list_array_data","array_data",
"atom","simple_array_data","var","var_name","ipaddr","loc","glob",""
};
#endif

static const short yyr1[] = {     0,
    73,    73,    74,    74,    75,    75,    76,    77,    77,    78,
    78,    79,    79,    79,    80,    80,    81,    81,    81,    82,
    82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
    83,    84,    84,    85,    85,    85,    85,    86,    86,    87,
    88,    89,    90,    90,    90,    90,    91,    92,    92,    92,
    93,    93,    94,    94,    95,    95,    96,    96,    96,    96,
    96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
   100,   101,   101,   101,   101,   102,   102,   102,   102,   102,
   102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
   102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
   102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
   104,   104,   105,   105,   106,   106,   107,   108,   108,   108,
   109,   110,   111,   112
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     6,     0,     1,     1,
     3,     3,     2,     2,     1,     2,     1,     1,     1,     1,
     2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
     1,     5,     7,     1,     1,     1,     1,     9,     8,     5,
     5,     6,     0,     1,     1,     1,     4,     1,     1,     4,
     0,     1,     1,     3,     1,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     1,     1,     1,     1,     4,
     1,     2,     2,     2,     2,     3,     3,     2,     3,     3,
     3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     1,     1,     1,     1,     1,     1,     3,
     1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
     1,     7,     2,     2
};

static const short yydefact[] = {     1,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    20,     0,    68,    69,     8,     8,    19,     2,
     3,     6,    18,     5,    17,     0,    48,    49,    34,    35,
    36,    37,     0,    23,     0,     0,    66,    67,     0,     0,
     0,     0,     0,    43,    69,     0,     0,     0,    28,    29,
   115,     0,     0,     0,     0,   116,   109,     0,   120,   105,
   121,   119,    91,    30,   108,   107,   104,   118,   106,     0,
    72,    73,    13,     0,    15,    51,   123,     9,    10,   124,
     4,    14,    24,    25,    21,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    74,    75,     0,    22,    26,    27,
     8,     0,     0,    46,    44,    45,     0,     0,     0,     0,
   115,   116,     0,   111,   117,   113,    78,    82,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    12,    16,     0,    52,    53,   121,
    55,     0,    57,    63,    64,    65,    58,    59,    60,    61,
    62,     0,    71,     0,     0,     0,     0,     0,     0,    76,
     0,   110,     0,     0,    95,    94,    96,    97,    98,    99,
   102,   103,    93,    80,    81,    92,    83,    84,    86,    87,
    79,    88,    89,    90,    77,    85,   101,   100,    47,    50,
     0,     0,    11,    70,     0,    32,    20,     0,     0,    40,
    41,   114,   112,     0,    54,    56,     7,    14,     0,    43,
    42,     0,    33,     0,     0,     0,    39,     0,   122,    38,
     0,     0,     0
};

static const short yydefgoto[] = {   231,
    20,    21,    22,    77,    78,    57,    74,    58,    25,    26,
    27,    28,    29,    30,    31,    32,   103,    33,    59,   147,
   148,   149,    60,    36,    61,    62,   162,    63,   151,    65,
   113,   114,    66,   116,    67,    68,    69,    40,    41
};

static const short yypact[] = {   400,
   -65,   -31,   -26,   -43,   -12,   827,   -11,    -6,   723,    -8,
   -43,   -43,-32768,   118,-32768,    -3,   -43,   -43,-32768,-32768,
   400,-32768,-32768,    35,-32768,     4,-32768,-32768,-32768,-32768,
-32768,-32768,     6,-32768,     7,   321,     3,-32768,    11,    12,
    13,    15,   723,    45,-32768,    22,   723,    -7,-32768,-32768,
-32768,   723,   -19,   723,   723,    17,    51,    35,    58,     7,
   781,   867,    11,   718,-32768,-32768,-32768,-32768,-32768,    49,
-32768,-32768,-32768,   389,    35,   723,-32768,-32768,    30,-32768,
-32768,-32768,-32768,-32768,-32768,   723,   723,   723,   723,   723,
   723,   723,   723,   723,-32768,-32768,   723,-32768,-32768,-32768,
   -43,   469,    36,-32768,-32768,-32768,   723,   490,   723,   552,
    23,-32768,    32,    40,-32768,-32768,   718,   718,    31,   723,
   723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
   723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
   723,   723,   723,    38,-32768,    35,    41,    47,-32768,   829,
   718,   -43,   718,   718,   718,   718,   718,   718,   718,   718,
   718,    46,   718,    42,   827,   775,   573,   827,   635,-32768,
   -13,-32768,   -19,    20,   718,   718,   718,   718,   718,   718,
   718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
   718,   718,   718,   718,   718,   718,   718,   718,-32768,-32768,
   723,   723,-32768,-32768,   827,    85,   -16,   656,   827,    35,
-32768,-32768,-32768,    43,-32768,   718,    51,   827,    53,    45,
    35,    48,    35,   827,    56,    50,    35,   827,-32768,    35,
   115,   119,-32768
};

static const short yypgoto[] = {-32768,
   102,-32768,-32768,   -17,   -28,   104,-32768,    29,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -184,-32768,    34,-32768,
-32768,   -75,    61,    27,     0,    16,-32768,    77,   256,-32768,
   -46,-32768,   -51,   -42,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		916


static const short yytable[] = {    37,
    80,   115,    42,    46,     2,    37,     3,     4,     5,     6,
    37,    37,   111,    37,    82,    38,    79,    79,    51,   109,
    37,    38,   219,    15,    45,    43,    38,    38,    24,    38,
    44,    11,    12,    34,    48,   225,    38,    71,    72,    34,
    49,   -43,    75,    37,    47,    50,   112,    34,    70,    24,
    15,    16,   112,    76,    34,    83,    82,    84,    85,    38,
    35,    97,    98,    99,   100,     2,    35,     3,     4,     5,
     6,   101,   -18,    37,    35,   150,    39,   104,   107,   -23,
   144,    35,    39,   164,   152,   119,   171,   166,   214,    38,
    39,   172,    11,    12,   173,   199,   174,    39,   200,   205,
    79,   201,   146,    23,   105,   204,   218,    34,   222,    23,
   224,    15,    16,   228,   232,   229,   226,    23,   233,   115,
   106,   115,    81,   203,    23,   215,   213,     0,   212,     0,
     0,     0,     0,     0,    35,     0,     0,     0,     2,     0,
     3,     4,     5,     6,     0,     7,     8,     9,    10,     0,
    39,    79,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    37,    11,    12,    37,     0,    13,
    14,    73,     0,     0,     0,     0,     0,    23,     0,     0,
    38,     0,     0,    38,    15,    16,     0,    17,    18,    19,
     0,     0,     0,   206,     0,     0,   210,     0,    34,     0,
   150,    34,     0,     0,    37,     0,    37,     0,    37,     0,
     0,     0,     0,     0,     0,     0,     0,    37,     0,    37,
    38,     0,    38,    37,    38,    35,     0,    37,    35,     0,
     0,     0,     0,    38,     0,    38,     0,   221,    34,    38,
   104,    39,    34,    38,    39,     0,   223,     0,     0,     0,
     0,    34,   227,   104,     0,     0,   230,    34,     0,     0,
     0,    34,     0,     0,    64,    35,     0,   105,    23,    35,
     0,    23,     0,     0,     0,     0,     0,     0,    35,     0,
   105,    39,     0,   106,    35,    39,     0,     0,    35,     0,
     0,     0,     0,     0,    39,     0,   106,     0,   102,     0,
    39,     0,   108,     0,    39,     0,     0,   110,   217,   117,
   118,     0,    23,     0,     0,     0,     0,     0,     0,     0,
     0,    23,     0,     0,     0,     0,     0,    23,     0,     0,
     0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     0,     0,   163,    86,    87,    88,    89,    90,    91,    92,
    93,    94,   167,     0,   169,     0,     0,     0,    95,    96,
     0,     0,     0,     0,     0,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,   192,   193,   194,   195,   196,   197,   198,     0,
     0,     0,     1,     0,     0,     0,     0,     0,     0,     2,
     0,     3,     4,     5,     6,     0,     7,     8,     9,    10,
     2,   208,     3,     4,     5,     6,     0,     7,     8,     9,
    10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
    13,    14,   145,     0,     0,     0,     0,    11,    12,     0,
     0,    13,    14,     0,     0,    15,    16,   216,    17,    18,
    19,     0,     0,     0,     0,     0,    15,    16,     0,    17,
    18,    19,   120,   121,   122,   123,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,     0,
     0,     0,     0,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     0,     0,     0,   137,   138,   139,     0,     0,   140,   141,
     0,     0,     0,     0,     0,     0,   165,     0,     0,     0,
     0,   142,     0,   143,   137,   138,   139,     0,     0,   140,
   141,     0,     0,     0,     0,     0,     0,   168,     0,     0,
     0,     0,   142,     0,   143,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,     0,     0,     0,     0,   120,   121,   122,   123,
   124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
   134,   135,   136,     0,     0,     0,   137,   138,   139,     0,
     0,   140,   141,     0,     0,     0,     0,     0,     0,   170,
     0,     0,     0,     0,   142,     0,   143,   137,   138,   139,
     0,     0,   140,   141,     0,     0,     0,     0,     0,     0,
   209,     0,     0,     0,     0,   142,     0,   143,   120,   121,
   122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
   132,   133,   134,   135,   136,     0,     0,     0,     0,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   133,   134,   135,   136,     0,     0,     0,   137,
   138,   139,     0,     0,   140,   141,   211,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   142,     0,   143,
   137,   138,   139,     0,     0,   140,   141,   220,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
   143,   120,   121,   122,   123,   124,   125,   126,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,     0,     0,
     0,     0,     0,     2,     0,     3,     4,     5,     6,     0,
     7,     8,     9,    10,    51,     0,     0,     0,     0,     0,
     0,     0,   137,   138,   139,     0,     0,   140,   141,     0,
    11,    12,     0,     0,    13,    14,     0,     0,     0,    52,
   142,    53,   143,    54,    55,     0,     0,     0,    56,    15,
    16,     0,    17,    18,    19,     2,     0,     3,     4,     5,
     6,     0,     7,     8,     9,    10,    51,     0,     0,     0,
     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
   -66,   -66,    11,    12,     0,     0,   207,    14,   -66,   -66,
     0,    52,     0,    53,     0,    54,    55,     0,     0,    97,
    56,    15,    16,     0,    17,    18,    19,     2,     0,     3,
     4,     5,     6,     0,     7,     8,     9,    10,     0,     0,
     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     0,     0,     0,     0,    11,    12,   -66,   -66,    13,    14,
     0,     0,     0,     0,   202,     0,     0,    97,     0,     0,
     0,     0,     0,    15,    16,     0,    17,    18,    19,   -67,
   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
     0,     0,     0,     0,   -67,   -67
};

static const short yycheck[] = {     0,
    18,    53,    68,     4,    21,     6,    23,    24,    25,    26,
    11,    12,    32,    14,    22,     0,    17,    18,    32,    27,
    21,     6,   207,    67,    68,    57,    11,    12,     0,    14,
    57,    48,    49,     0,     6,   220,    21,    11,    12,     6,
    52,    58,    14,    44,    57,    52,    66,    14,    57,    21,
    67,    68,    66,    57,    21,    52,    22,    52,    52,    44,
     0,    59,    52,    52,    52,    21,     6,    23,    24,    25,
    26,    57,    22,    74,    14,    76,     0,    44,    57,    22,
    32,    21,     6,   101,    55,    69,    64,    52,    69,    74,
    14,    60,    48,    49,    55,    58,    66,    21,    58,    58,
   101,    55,    74,     0,    44,    60,    22,    74,    66,     6,
    58,    67,    68,    58,     0,    66,    69,    14,     0,   171,
    44,   173,    21,   152,    21,   201,   173,    -1,   171,    -1,
    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    21,    -1,
    23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
    74,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   165,    48,    49,   168,    -1,    52,
    53,    54,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
   165,    -1,    -1,   168,    67,    68,    -1,    70,    71,    72,
    -1,    -1,    -1,   165,    -1,    -1,   168,    -1,   165,    -1,
   201,   168,    -1,    -1,   205,    -1,   207,    -1,   209,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,   220,
   205,    -1,   207,   224,   209,   165,    -1,   228,   168,    -1,
    -1,    -1,    -1,   218,    -1,   220,    -1,   209,   205,   224,
   207,   165,   209,   228,   168,    -1,   218,    -1,    -1,    -1,
    -1,   218,   224,   220,    -1,    -1,   228,   224,    -1,    -1,
    -1,   228,    -1,    -1,     9,   205,    -1,   207,   165,   209,
    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,
   220,   205,    -1,   207,   224,   209,    -1,    -1,   228,    -1,
    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,    43,    -1,
   224,    -1,    47,    -1,   228,    -1,    -1,    52,   205,    54,
    55,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    -1,    -1,    97,    33,    34,    35,    36,    37,    38,    39,
    40,    41,   107,    -1,   109,    -1,    -1,    -1,    48,    49,
    -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    21,
    -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
    21,   166,    23,    24,    25,    26,    -1,    28,    29,    30,
    31,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
    52,    53,    54,    -1,    -1,    -1,    -1,    48,    49,    -1,
    -1,    52,    53,    -1,    -1,    67,    68,   202,    70,    71,
    72,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,
    71,    72,     4,     5,     6,     7,     8,     9,    10,    11,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,
    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
    -1,    63,    -1,    65,    45,    46,    47,    -1,    -1,    50,
    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
    -1,    -1,    63,    -1,    65,     4,     5,     6,     7,     8,
     9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    -1,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    45,    46,    47,    -1,
    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
    -1,    -1,    -1,    -1,    63,    -1,    65,    45,    46,    47,
    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
    58,    -1,    -1,    -1,    -1,    63,    -1,    65,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,     4,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    45,
    46,    47,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
    45,    46,    47,    -1,    -1,    50,    51,    52,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
    65,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,    -1,
    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,
    48,    49,    -1,    -1,    52,    53,    -1,    -1,    -1,    57,
    63,    59,    65,    61,    62,    -1,    -1,    -1,    66,    67,
    68,    -1,    70,    71,    72,    21,    -1,    23,    24,    25,
    26,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    48,    49,    -1,    -1,    52,    53,    48,    49,
    -1,    57,    -1,    59,    -1,    61,    62,    -1,    -1,    59,
    66,    67,    68,    -1,    70,    71,    72,    21,    -1,    23,
    24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
    -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    -1,    -1,    -1,    -1,    48,    49,    48,    49,    52,    53,
    -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,
    -1,    -1,    -1,    67,    68,    -1,    70,    71,    72,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
    -1,    -1,    -1,    -1,    48,    49
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */
   
#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 321 "nasl_grammar.y"

#include <stdio.h>
extern char yytext[];
extern int column;
yyerror(char const *s)
{
	
	//printf("\n%d\n", yylineno);
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

lex()
{
	printf("\n%s\n", stdin);
}
int main()
{
	return(yyparse());
}
