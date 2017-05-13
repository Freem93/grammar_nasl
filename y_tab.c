
/*  A Bison parser, made from nasl_grammar.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	EQ	258
#define	NE	259
#define	LT	260
#define	GT	261
#define	LE	262
#define	GE	263
#define	SEARCH_SUBSTR	264
#define	NOT_SEARCH_SUBSTR	265
#define	POWER	266
#define	ADD	267
#define	SUB	268
#define	MUL	269
#define	DIV	270
#define	MOD	271
#define	XOR	272
#define	OR	273
#define	OR_OP	274
#define	IF	275
#define	ELSE	276
#define	FOR	277
#define	FOREACH	278
#define	WHILE	279
#define	REPEAT	280
#define	UNTIL	281
#define	BREAK	282
#define	CONTINUE	283
#define	RETURN	284
#define	INCLUDE	285
#define	STR_FIRST	286
#define	FUNCTION	287
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
#define	IDENTIFIER	322
#define	LOCAL	323
#define	GLOBAL	324
#define	COMMENT	325

#line 2 "nasl_grammar.y"


#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#define YYPRINT(file, type, value) fprintf(file, "%d", value);
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



#define	YYFINAL		216
#define	YYFLAG		-32768
#define	YYNTBASE	78

#define YYTRANSLATE(x) ((unsigned)(x) <= 325 ? yytranslate[x] : 118)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    71,     2,    77,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    73,    72,     2,
    74,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    75,     2,    76,     2,     2,     2,     2,     2,     2,     2,
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
    66,    67,    68,    69,    70
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    10,    12,    18,    19,    21,
    23,    27,    31,    34,    36,    39,    42,    44,    46,    48,
    50,    51,    53,    55,    57,    59,    61,    63,    65,    67,
    69,    72,    74,    80,    88,    90,    92,    94,    96,   106,
   112,   118,   125,   126,   128,   130,   132,   137,   142,   143,
   145,   146,   148,   152,   154,   158,   162,   166,   170,   174,
   178,   182,   186,   190,   194,   196,   198,   200,   205,   207,
   210,   213,   216,   219,   223,   227,   230,   234,   238,   242,
   245,   249,   253,   257,   261,   265,   269,   273,   277,   279,
   283,   287,   291,   295,   299,   303,   307,   311,   315,   319,
   323,   327,   329,   331,   333,   335,   337,   341,   343,   347,
   349,   353,   355,   357,   359,   361,   363,   365,   367,   375,
   378
};

static const short yyrhs[] = {    -1,
    79,     0,    80,     0,    80,    79,     0,    86,     0,    81,
     0,    32,    57,    82,    58,    84,     0,     0,    83,     0,
   103,     0,   103,    71,    83,     0,    53,    85,    54,     0,
    53,    54,     0,    86,     0,    86,    85,     0,    87,    72,
     0,    84,     0,    89,     0,    90,     0,    70,     0,     0,
   101,     0,   106,     0,    97,     0,    88,     0,    96,     0,
   116,     0,   117,     0,    27,     0,    28,     0,    29,   107,
     0,    29,     0,    20,    57,   107,    58,    86,     0,    20,
    57,   107,    58,    86,    21,    86,     0,    91,     0,    92,
     0,    93,     0,    94,     0,    22,    57,    95,    72,   107,
    72,    95,    58,    86,     0,    24,    57,   107,    58,    86,
     0,    25,    86,    26,   107,    72,     0,    23,   103,    57,
   107,    58,    86,     0,     0,   101,     0,   106,     0,    97,
     0,    30,    57,    31,    58,     0,   103,    57,    98,    58,
     0,     0,    99,     0,     0,   100,     0,   100,    71,    99,
     0,   107,     0,   103,    73,   107,     0,   102,    74,   107,
     0,   102,    37,   107,     0,   102,    38,   107,     0,   102,
    39,   107,     0,   102,    40,   107,     0,   102,    41,   107,
     0,   102,    34,   107,     0,   102,    35,   107,     0,   102,
    36,   107,     0,   103,     0,   104,     0,    67,     0,   103,
    75,   105,    76,     0,   107,     0,    48,   102,     0,    49,
   102,     0,   102,    48,     0,   102,    49,     0,    57,   107,
    58,     0,   107,    50,   107,     0,    61,   107,     0,   107,
    19,   107,     0,   107,    12,   107,     0,   107,    13,   107,
     0,    62,   107,     0,   107,    15,   107,     0,   107,    16,
   107,     0,   107,    51,   107,     0,   107,    17,   107,     0,
   107,    18,   107,     0,   107,    45,   107,     0,   107,    46,
   107,     0,   107,    47,   107,     0,   106,     0,   107,    14,
   107,     0,   107,    11,   107,     0,   107,     4,   107,     0,
   107,     3,   107,     0,   107,     5,   107,     0,   107,     6,
   107,     0,   107,     7,   107,     0,   107,     8,   107,     0,
   107,    65,   107,     0,   107,    63,   107,     0,   107,     9,
   107,     0,   107,    10,   107,     0,   113,     0,   101,     0,
   115,     0,   111,     0,   108,     0,    75,   109,    76,     0,
   110,     0,   110,    71,   109,     0,   112,     0,    31,    64,
   112,     0,    66,     0,    31,     0,   111,     0,   114,     0,
   104,     0,    97,     0,   103,     0,    66,    77,    66,    77,
    66,    77,    66,     0,    68,    82,     0,    69,    82,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    84,    86,    89,    91,    94,    98,    99,   102,
   104,   107,   109,   112,   114,   117,   119,   120,   121,   122,
   125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
   137,   139,   142,   144,   147,   149,   150,   151,   154,   158,
   162,   166,   170,   171,   172,   173,   176,   180,   184,   185,
   185,   187,   189,   192,   194,   197,   199,   200,   201,   202,
   203,   204,   205,   206,   209,   211,   214,   218,   222,   226,
   228,   229,   230,   233,   235,   236,   237,   238,   239,   240,
   241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
   251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
   261,   262,   263,   264,   265,   266,   269,   273,   275,   278,
   280,   285,   287,   290,   294,   296,   297,   300,   304,   308,
   312
};

static const char * const yytname[] = {   "$","error","$undefined.","EQ","NE",
"LT","GT","LE","GE","SEARCH_SUBSTR","NOT_SEARCH_SUBSTR","POWER","ADD","SUB",
"MUL","DIV","MOD","XOR","OR","OR_OP","IF","ELSE","FOR","FOREACH","WHILE","REPEAT",
"UNTIL","BREAK","CONTINUE","RETURN","INCLUDE","STR_FIRST","FUNCTION","ASSIGN",
"RIGHT_ASSIGN","RIGHT_RIGHT_ASSIGN","LEFT_ASSIGN","ADD_ASSIGN","SUB_ASSIGN",
"MUL_ASSIGN","DIV_ASSIGN","MOD_ASSIGN","AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN",
"RIGHT_OP","RIGHT_OP_3","LEFT_OP","INC_OP","DEC_OP","AND_OP","AND","SEMICOLON",
"LEFT_BRACE","RIGHT_BRACE","COMMA","COLON","LEFT_PARENTHESIS","RIGHT_PARENTHESIS",
"LEFT_SQ_BRACKET","RIGHT_SQ_BRACKET","NOT","BIT","NOT_BIT","ARROW","ASSIGN_BIT",
"INTEGER","IDENTIFIER","LOCAL","GLOBAL","COMMENT","','","';'","':'","'='","'['",
"']'","'.'","start","command_declaration_list","command_declaration","function_declaration",
"argument_declaration","first_argument_declaration","body","command_list","command",
"simple_command","ret","if_body","loop","for_loop","while_loop","repeat_loop",
"foreach_loop","aff_func","inc","function_call","argument_list","first_argument_list",
"argument","aff","lvalue","identifier","array_elem","array_index","post_pre_command",
"expression","const_array","list_array_data","array_data","atom","simple_array_data",
"var","var_name","ipaddr","loc","glob",""
};
#endif

static const short yyr1[] = {     0,
    78,    78,    79,    79,    80,    80,    81,    82,    82,    83,
    83,    84,    84,    85,    85,    86,    86,    86,    86,    86,
    87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
    88,    88,    89,    89,    90,    90,    90,    90,    91,    92,
    93,    94,    95,    95,    95,    95,    96,    97,    98,    98,
    98,    99,    99,   100,   100,   101,   101,   101,   101,   101,
   101,   101,   101,   101,   102,   102,   103,   104,   105,   106,
   106,   106,   106,   107,   107,   107,   107,   107,   107,   107,
   107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
   107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
   107,   107,   107,   107,   107,   107,   108,   109,   109,   110,
   110,   111,   111,   112,   113,   113,   113,   114,   115,   116,
   117
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     5,     0,     1,     1,
     3,     3,     2,     1,     2,     2,     1,     1,     1,     1,
     0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     2,     1,     5,     7,     1,     1,     1,     1,     9,     5,
     5,     6,     0,     1,     1,     1,     4,     4,     0,     1,
     0,     1,     3,     1,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     1,     1,     4,     1,     2,
     2,     2,     2,     3,     3,     2,     3,     3,     3,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     1,     1,     1,     1,     1,     3,     1,     3,     1,
     3,     1,     1,     1,     1,     1,     1,     1,     7,     2,
     2
};

static const short yydefact[] = {     1,
     0,     0,     0,     0,    21,    29,    30,    32,     0,     0,
     0,     0,    21,    67,     8,     8,    20,     2,     3,     6,
    17,     5,     0,    25,    18,    19,    35,    36,    37,    38,
    26,    24,    22,     0,    65,    66,    23,    27,    28,     0,
    43,     0,     0,     0,   113,     0,     0,     0,   112,     0,
   117,   103,   118,   116,    89,    31,   106,   105,   102,   115,
   104,     0,     8,    70,    65,    71,    13,     0,    14,   120,
     9,    10,   121,     4,    16,     0,     0,     0,     0,     0,
     0,     0,     0,    72,    73,     0,    49,     0,     0,     0,
    46,    44,    45,     0,     0,     0,     0,    76,    80,     0,
   113,   112,     0,   108,   114,   110,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    12,    15,     0,    62,    63,    64,    57,    58,
    59,    60,    61,    56,     0,    50,    52,   118,    54,     0,
    69,    21,     0,     0,    21,     0,    74,     0,     0,   107,
     0,    93,    92,    94,    95,    96,    97,   100,   101,    91,
    78,    79,    90,    81,    82,    84,    85,    77,    86,    87,
    88,    75,    83,    99,    98,    47,     0,    11,    48,     0,
     0,    68,    33,     0,    21,    40,    41,     0,   111,   109,
     7,    53,    55,    21,    43,    42,     0,    34,     0,     0,
    21,   119,    39,     0,     0,     0
};

static const short yydefgoto[] = {   214,
    18,    19,    20,    70,    71,    21,    68,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    90,    31,    51,   145,
   146,   147,    52,    34,    53,    54,   150,    55,   149,    57,
   103,   104,    58,   106,    59,    60,    61,    38,    39
};

static const short yypact[] = {   529,
   -49,   -47,   -53,   -39,   631,-32768,-32768,   621,   -32,   -30,
   -53,   -53,   596,-32768,   -53,   -53,-32768,-32768,   529,-32768,
-32768,-32768,   -41,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   720,   -37,-32768,-32768,-32768,-32768,   621,
     1,   -22,   621,     7,-32768,   621,   621,   621,   -34,   -27,
-32768,-32768,   696,   738,-32768,   518,-32768,-32768,-32768,-32768,
-32768,    13,   -53,-32768,   -29,-32768,-32768,    -6,   564,-32768,
-32768,   -17,-32768,-32768,-32768,   621,   621,   621,   621,   621,
   621,   621,   621,-32768,-32768,   621,   621,   621,   350,   -16,
-32768,-32768,-32768,   621,   413,   621,   434,   518,   518,   -11,
    -7,-32768,   -15,   -12,-32768,-32768,   621,   621,   621,   621,
   621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
   621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     6,     9,-32768,-32768,   -53,   518,   518,   518,   518,   518,
   518,   518,   518,   518,    14,-32768,    -1,   668,   518,    -5,
   518,   631,   621,   497,   631,   114,-32768,    -3,   -24,-32768,
   -27,   518,   518,   518,   518,   518,   518,   518,   518,   518,
   518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
   518,   518,   518,   518,   518,-32768,    22,-32768,-32768,   621,
   621,-32768,    55,   327,   631,-32768,-32768,    11,-32768,-32768,
-32768,-32768,   518,   631,     1,-32768,     2,-32768,    20,    15,
   631,-32768,-32768,    80,    82,-32768
};

static const short yypgoto[] = {-32768,
    64,-32768,-32768,   -10,   -51,  -102,    23,    -4,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  -116,-32768,    21,-32768,
   -99,-32768,    32,    12,     0,    17,-32768,    47,   198,-32768,
   -68,-32768,   -48,   -65,-32768,-32768,-32768,-32768,-32768
};


#define	YYLAST		812


static const short yytable[] = {    35,
    44,   105,    42,   101,    35,    73,    45,    40,    69,    41,
    65,    65,    35,    14,    72,    72,    36,    43,    35,    87,
    32,    36,    64,    66,    62,    32,    63,    36,    36,    36,
    75,    33,    96,    32,    94,    36,    33,    88,   102,    32,
    35,   102,   100,   131,    33,    88,    37,   133,    11,    12,
    33,    37,   132,   135,   158,   153,   159,    36,   161,    37,
   160,    91,    72,   186,    69,    37,   187,    14,    35,   190,
   192,   189,    92,   198,    13,   204,   207,   211,   210,   215,
   212,   216,    74,   188,   201,    36,   148,    93,   209,    32,
   202,   134,   200,   199,     0,     0,     0,     0,     0,     0,
    33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   105,     0,   105,     0,     0,    37,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,   122,   123,     0,    72,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   193,     0,     0,
   196,    35,     0,     0,    35,     0,     0,     0,   124,   125,
   126,     0,     0,   127,   128,     0,     0,     0,    36,     0,
     0,    36,    32,     0,     0,    32,   129,     0,   130,     0,
     0,     0,     0,    33,     0,   197,    33,     0,     0,   148,
   206,     0,     0,     0,    35,     0,     0,     0,    37,   208,
     0,    37,     0,    35,    35,    56,   213,     0,     0,     0,
    35,    36,     0,     0,     0,    32,     0,     0,     0,     0,
    36,    36,     0,     0,    32,    91,    33,    36,     0,     0,
     0,    32,     0,     0,     0,    33,    92,    89,     0,     0,
    95,    37,    33,    97,    98,    99,     0,     0,     0,     0,
    37,    93,     0,     0,     0,     0,     0,    37,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   136,   137,   138,   139,   140,   141,   142,
   143,     0,     0,   144,     0,   151,     0,     0,     0,     0,
     0,   154,     0,   156,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,     0,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
   194,     0,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     0,   124,   125,   126,     0,     0,   127,   128,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   203,   129,
     0,   130,     0,     0,   124,   125,   126,     0,   205,   127,
   128,     0,     0,     0,     0,     0,     0,   152,     0,     0,
     0,     0,   129,     0,   130,   107,   108,   109,   110,   111,
   112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
   122,   123,     0,     0,     0,     0,   107,   108,   109,   110,
   111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,   122,   123,     0,     0,     0,     0,   124,   125,   126,
     0,     0,   127,   128,     0,     0,     0,     0,     0,     0,
   155,     0,     0,     0,     0,   129,     0,   130,   124,   125,
   126,     0,     0,   127,   128,     0,     0,     0,     0,     0,
     0,   157,     0,     0,     0,     0,   129,     0,   130,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,   122,   123,     0,     0,     0,     0,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,   122,   123,     0,     0,     0,
     0,   124,   125,   126,     0,     0,   127,   128,     1,     0,
     2,     3,     4,     5,   195,     6,     7,     8,     9,   129,
    10,   130,   124,   125,   126,     0,     0,   127,   128,     0,
     0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
   129,    13,   130,     1,     0,     2,     3,     4,     5,     0,
     6,     7,     8,     9,     0,    14,    15,    16,    17,     0,
   -21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,    12,     0,     0,     1,    13,     2,     3,     4,
     5,     0,     6,     7,     8,     9,     0,     0,     0,     0,
    14,    15,    16,    17,     0,   -21,     0,     0,     0,     0,
     0,     0,     0,    11,    12,     0,     0,     0,    13,    67,
     1,    45,     2,     3,     4,     5,     0,     6,     7,     8,
     9,     0,    14,    15,    16,    17,     0,     0,    11,    12,
     0,     0,     0,     0,     0,     0,     0,    46,    11,    12,
     0,    47,    48,    13,     0,     0,    49,    14,     0,     0,
     0,     0,     0,     0,     0,    50,     0,    14,    15,    16,
    17,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
     0,     0,     0,     0,     0,   -65,   -65,     0,     0,     0,
     0,     0,     0,     0,    87,     0,     0,     0,     0,   -65,
   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
   191,   -65,    88,   -65,   -65,     0,     0,     0,     0,     0,
     0,     0,    87,    76,    77,    78,    79,    80,    81,    82,
    83,     0,     0,     0,     0,     0,     0,    84,    85,   -65,
    88,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,
     0,     0,     0,     0,     0,   -66,   -66,     0,     0,     0,
     0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   -66
};

static const short yycheck[] = {     0,
     5,    50,     3,    31,     5,    16,    31,    57,    13,    57,
    11,    12,    13,    67,    15,    16,     0,    57,    19,    57,
     0,     5,    11,    12,    57,     5,    57,    11,    12,    13,
    72,     0,    26,    13,    57,    19,     5,    75,    66,    19,
    41,    66,    77,    31,    13,    75,     0,    54,    48,    49,
    19,     5,    63,    71,    66,    72,    64,    41,    71,    13,
    76,    41,    63,    58,    69,    19,    58,    67,    69,    71,
    76,    58,    41,    77,    53,    21,    66,    58,    77,     0,
    66,     0,    19,   135,   187,    69,    87,    41,   205,    69,
   190,    69,   161,   159,    -1,    -1,    -1,    -1,    -1,    -1,
    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   159,    -1,   161,    -1,    -1,    69,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,   135,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,
   155,   152,    -1,    -1,   155,    -1,    -1,    -1,    45,    46,
    47,    -1,    -1,    50,    51,    -1,    -1,    -1,   152,    -1,
    -1,   155,   152,    -1,    -1,   155,    63,    -1,    65,    -1,
    -1,    -1,    -1,   152,    -1,    72,   155,    -1,    -1,   190,
   195,    -1,    -1,    -1,   195,    -1,    -1,    -1,   152,   204,
    -1,   155,    -1,   204,   205,     8,   211,    -1,    -1,    -1,
   211,   195,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
   204,   205,    -1,    -1,   204,   205,   195,   211,    -1,    -1,
    -1,   211,    -1,    -1,    -1,   204,   205,    40,    -1,    -1,
    43,   195,   211,    46,    47,    48,    -1,    -1,    -1,    -1,
   204,   205,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,    82,
    83,    -1,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,
    -1,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
   113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
   123,   124,   125,   126,   127,   128,   129,   130,    -1,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
   153,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
    11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    63,
    -1,    65,    -1,    -1,    45,    46,    47,    -1,    72,    50,
    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
    -1,    -1,    63,    -1,    65,     3,     4,     5,     6,     7,
     8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
    18,    19,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    -1,    -1,    -1,    -1,    45,    46,    47,
    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    45,    46,
    47,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,     3,
     4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
    -1,    45,    46,    47,    -1,    -1,    50,    51,    20,    -1,
    22,    23,    24,    25,    58,    27,    28,    29,    30,    63,
    32,    65,    45,    46,    47,    -1,    -1,    50,    51,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
    63,    53,    65,    20,    -1,    22,    23,    24,    25,    -1,
    27,    28,    29,    30,    -1,    67,    68,    69,    70,    -1,
    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    48,    49,    -1,    -1,    20,    53,    22,    23,    24,
    25,    -1,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
    67,    68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
    20,    31,    22,    23,    24,    25,    -1,    27,    28,    29,
    30,    -1,    67,    68,    69,    70,    -1,    -1,    48,    49,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    48,    49,
    -1,    61,    62,    53,    -1,    -1,    66,    67,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    -1,    67,    68,    69,
    70,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    34,
    35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
    73,    74,    75,    48,    49,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    57,    34,    35,    36,    37,    38,    39,    40,
    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    74,
    75,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    74
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
#line 317 "nasl_grammar.y"



#include <stdio.h>
extern char yytext[];
extern int column;

yyerror(char const *s)
{
	
	printf("\n%d\n", yylineno);
	fflush(stdout);

	fprintf(stderr, "%s", s);
}

lex()
{
	printf("\n%s\n", stdin);
}

int main()
{
	return(yyparse());
}

