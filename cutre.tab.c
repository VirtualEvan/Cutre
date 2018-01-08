/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "cutre.y" /* yacc.c:339  */


  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1

#line 75 "cutre.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cutre.tab.h".  */
#ifndef YY_YY_CUTRE_TAB_H_INCLUDED
# define YY_YY_CUTRE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    AND_ASIG = 259,
    ARRAY = 260,
    HASH = 261,
    CABECERA = 262,
    CADENA = 263,
    CARACTER = 264,
    CONJUNTO = 265,
    CONSTANTES = 266,
    CONTINUAR = 267,
    CTC_CADENA = 268,
    CTC_CARACTER = 269,
    CTC_ENTERA = 270,
    CTC_REAL = 271,
    DESPD = 272,
    DESPD_ASIG = 273,
    DESPI = 274,
    DESPI_ASIG = 275,
    DIV_ASIG = 276,
    DEVOLVER = 277,
    ENTERO = 278,
    EQ = 279,
    ES = 280,
    ESCAPE = 281,
    ESTRUCTURA = 282,
    ETIQUETA = 283,
    FLECHA_DOBLE = 284,
    FLECHA_SIMPLE = 285,
    FICHERO = 286,
    FIN = 287,
    FUNCION = 288,
    HAZ = 289,
    GE = 290,
    IDENTIFICADOR = 291,
    IR_A = 292,
    LE = 293,
    MIENTRAS = 294,
    MOD_ASIG = 295,
    MULT_ASIG = 296,
    NADA = 297,
    NEQ = 298,
    PATH = 299,
    OR = 300,
    OR_ASIG = 301,
    PARA = 302,
    PARA_CADA = 303,
    POT_ASIG = 304,
    PRINCIPIO = 305,
    PROGRAMA = 306,
    POTENCIA = 307,
    REAL = 308,
    RESTA_ASIG = 309,
    SI = 310,
    SINO = 311,
    SI_ENCAMBIO = 312,
    SUMA_ASIG = 313,
    TAMANO = 314,
    TIPOS = 315,
    REF = 316,
    UNION = 317,
    VARIABLES = 318,
    XOR_ASIG = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CUTRE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "cutre.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,     2,     2,     2,    79,     2,
      68,    69,    86,    84,    66,    85,    73,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    65,
      83,    67,    82,    78,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,    75,    77,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    81,    71,    89,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    29,    33,    34,    38,    42,    54,    55,
      59,    60,    63,    67,    71,    72,    76,    77,    78,    79,
      83,    84,    85,    86,    87,    91,    92,    93,    97,    98,
     102,   103,   107,   111,   112,   120,   124,   125,   129,   130,
     131,   132,   133,   134,   138,   139,   140,   145,   146,   152,
     153,   157,   161,   162,   166,   167,   171,   178,   182,   183,
     192,   193,   197,   198,   203,   207,   208,   212,   216,   217,
     221,   222,   223,   224,   225,   226,   227,   228,   232,   236,
     237,   245,   246,   247,   248,   249,   250,   254,   255,   259,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   278,   279,   283,   284,   289,   290,   294,   295,
     296,   297,   298,   301,   302,   306,   307,   308,   312,   316,
     317,   325,   326,   327,   328,   332,   333,   334,   335,   336,
     340,   341,   342,   343,   347,   348,   352,   353,   357,   358,
     362,   363,   367,   368,   369,   373,   374,   375,   376,   377,
     381,   382,   383,   384,   385,   386,   390,   391,   392,   396,
     397,   398,   402,   403,   404,   408,   409,   413,   414,   415,
     416,   417,   421,   422,   423
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "AND_ASIG", "ARRAY", "HASH",
  "CABECERA", "CADENA", "CARACTER", "CONJUNTO", "CONSTANTES", "CONTINUAR",
  "CTC_CADENA", "CTC_CARACTER", "CTC_ENTERA", "CTC_REAL", "DESPD",
  "DESPD_ASIG", "DESPI", "DESPI_ASIG", "DIV_ASIG", "DEVOLVER", "ENTERO",
  "EQ", "ES", "ESCAPE", "ESTRUCTURA", "ETIQUETA", "FLECHA_DOBLE",
  "FLECHA_SIMPLE", "FICHERO", "FIN", "FUNCION", "HAZ", "GE",
  "IDENTIFICADOR", "IR_A", "LE", "MIENTRAS", "MOD_ASIG", "MULT_ASIG",
  "NADA", "NEQ", "PATH", "OR", "OR_ASIG", "PARA", "PARA_CADA", "POT_ASIG",
  "PRINCIPIO", "PROGRAMA", "POTENCIA", "REAL", "RESTA_ASIG", "SI", "SINO",
  "SI_ENCAMBIO", "SUMA_ASIG", "TAMANO", "TIPOS", "REF", "UNION",
  "VARIABLES", "XOR_ASIG", "';'", "','", "'='", "'('", "')'", "'{'", "'}'",
  "':'", "'.'", "'^'", "'\\\\'", "'['", "']'", "'?'", "'&'", "'@'", "'|'",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'!'", "'~'", "$accept",
  "programa", "cabecera", "ficheros_cabecera", "fichero_cabecera",
  "bloque", "declaraciones_tipos", "lista_declaraciones_tipo",
  "declaracion_tipo", "especificacion_tipo", "referencias", "tipo_basico",
  "tipo_escalar", "tipo_enumerado", "tipo_estructurado", "lista_campos",
  "linea_campo", "lista_identificadores", "declaraciones_constantes",
  "declaracion_constante", "constante", "constante_enumerada",
  "constante_completa", "hash_completa", "elemento_hash",
  "constante_estructurada", "campo_const_coma", "campo_constante",
  "declaraciones_variables", "declaracion_variables",
  "declaraciones_funciones", "declaracion_funcion", "lista_parametros",
  "conj_parametros", "parametros", "tipo_salida", "cuerpo_funcion",
  "bloque_instrucciones", "instrucciones", "instruccion",
  "instruccion_expresion", "asignacion", "operador_asignacion",
  "instruccion_bifurcacion", "otros_casos", "accion", "instruccion_bucle",
  "lista_asignaciones", "instruccion_salto", "instruccion_destino_salto",
  "instruccion_devolver", "expresion_constante", "expresion_indexada",
  "expresion_basica", "indice", "expresion_funcional", "lista_expresiones",
  "expresion", "expresion_logica", "prioridad8", "prioridad7",
  "prioridad6", "prioridad5", "prioridad4", "prioridad3", "prioridad2",
  "prioridad1", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    59,    44,    61,    40,    41,
     123,   125,    58,    46,    94,    92,    91,    93,    63,    38,
      64,   124,    62,    60,    43,    45,    42,    47,    33,   126
};
# endif

#define YYPACT_NINF -286

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-286)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    33,    44,    29,    57,  -286,    93,  -286,   165,  -286,
     155,    92,  -286,   169,   128,   209,  -286,  -286,  -286,   194,
     124,   196,   206,   197,  -286,   201,   198,   412,  -286,   242,
    -286,   -32,   135,   233,    -3,  -286,   207,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,   221,  -286,  -286,  -286,  -286,   223,
    -286,  -286,  -286,  -286,   212,   412,   240,  -286,  -286,     5,
      -7,   359,  -286,  -286,  -286,  -286,  -286,  -286,   196,   196,
      70,   222,  -286,   218,  -286,   246,   196,   260,   226,    42,
     235,   265,   299,   234,   267,   238,   239,   272,   241,    89,
     149,   149,   329,  -286,  -286,   247,  -286,  -286,  -286,  -286,
    -286,   264,  -286,   249,   136,  -286,   -16,   137,  -286,  -286,
    -286,  -286,    51,   279,   251,  -286,  -286,    70,  -286,   252,
    -286,  -286,    18,     8,   196,   254,   246,  -286,  -286,  -286,
    -286,  -286,   182,  -286,   182,   182,   182,  -286,     3,  -286,
     255,     4,    71,   216,   118,   116,   -34,   271,  -286,  -286,
    -286,   259,  -286,  -286,   287,    77,   274,    89,    58,   261,
      89,   263,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,   152,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,    89,   149,    89,    89,  -286,  -286,  -286,  -286,  -286,
    -286,   301,  -286,  -286,    46,    78,  -286,   275,   279,   -30,
    -286,   280,  -286,   -15,    -3,    -3,  -286,  -286,  -286,   -49,
    -286,    18,  -286,  -286,  -286,  -286,  -286,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,  -286,   276,  -286,    84,
    -286,  -286,   281,    89,  -286,    22,    89,   283,  -286,  -286,
    -286,   282,  -286,   285,  -286,   291,    70,    70,  -286,   345,
    -286,    70,   -12,  -286,  -286,  -286,    -3,    -3,  -286,    -3,
    -286,  -286,  -286,  -286,  -286,  -286,    71,    71,   288,   216,
     216,   216,   216,   118,   118,   118,   118,   118,   116,   116,
     -34,   -34,   271,   271,  -286,    89,    89,  -286,   299,   294,
      89,   149,   295,   299,  -286,  -286,  -286,  -286,  -286,   301,
    -286,  -286,  -286,  -286,    -3,  -286,  -286,  -286,    89,   300,
    -286,  -286,   149,   307,  -286,   299,  -286,  -286,  -286,   310,
     133,   149,  -286,   -18,  -286,   299,   143,  -286,   299,   311,
    -286,   299,   346,    89,  -286,  -286,   313,   299,  -286
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     8,     0,     1,     0,     2,     0,     4,
       0,     0,    10,     0,     0,     3,    14,     9,    11,     0,
       0,     0,     0,     0,     5,     0,     0,     0,    35,     0,
      33,     0,     0,     0,     0,    60,     0,    12,    14,    14,
      23,    22,    14,    20,     0,    24,    16,    21,    15,     0,
      13,    17,    18,    19,     0,     0,     0,    14,    57,     0,
       0,     0,    61,     7,     6,    25,    26,    27,     0,     0,
       0,     0,    34,     0,    14,    14,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    81,     0,    82,    83,    84,    85,
      86,     0,   125,     0,     0,    30,     0,     0,    41,    40,
      38,    39,     0,     0,     0,    42,    43,     0,    58,     0,
      69,    68,     0,     0,     0,     0,    14,   116,   123,   124,
     121,   122,     0,   119,     0,     0,     0,   172,   174,   173,
       0,   140,   144,   149,   155,   158,   161,   164,   166,   171,
     117,     0,   107,   106,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   132,   133,    78,    80,    88,    99,    98,
      97,    93,     0,    94,    92,   101,    91,    96,    95,   100,
      90,     0,     0,     0,     0,   128,    87,    28,    31,    14,
      29,    41,    46,    47,     0,     0,    49,     0,     0,     0,
      36,     0,    59,     0,     0,     0,    62,    70,    14,     0,
      65,     0,   167,   170,   168,   169,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,   136,     0,
     138,   115,     0,     0,   113,     0,     0,     0,   131,   127,
     129,     0,   126,     0,    89,     0,     0,     0,    44,     0,
      45,     0,     0,    54,    52,    37,     0,     0,    74,     0,
      72,    71,    67,    66,    64,    63,   142,   143,     0,   147,
     145,   146,   148,   150,   151,   152,   153,   154,   157,   156,
     159,   160,   162,   163,   165,     0,     0,   137,     0,     0,
       0,     0,     0,     0,   135,   134,    32,    51,    48,     0,
      50,    56,    55,    53,     0,    76,    75,    73,     0,     0,
     139,   108,     0,     0,   114,     0,   104,    77,   141,     0,
       0,     0,   112,     0,   109,     0,     0,   102,     0,     0,
     110,     0,     0,     0,   111,   103,     0,     0,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   377,   -14,
    -286,   -10,  -286,  -286,  -286,   320,    86,   -13,   382,  -286,
    -102,  -286,  -286,  -286,   132,  -286,  -286,   202,   -11,  -286,
     -17,   -21,  -286,  -286,   270,   273,   190,   -22,  -286,   -50,
    -286,  -152,  -286,  -286,  -286,    45,  -286,  -285,  -286,  -286,
    -286,  -286,   -61,   -64,   230,   -60,  -286,   -85,  -286,    -4,
      32,   184,     1,    31,     2,   170,     7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    15,    24,     7,     8,    11,    12,   121,
      26,    50,    51,    52,    53,   104,   105,   106,   203,    20,
     114,   115,   194,   195,   196,   116,   198,   199,   204,    32,
     205,    35,    77,   124,   125,   122,   206,   152,    92,   153,
      94,    95,   184,    96,   333,   154,    97,   245,    98,    99,
     100,   137,   138,   102,   185,   139,   239,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     101,   103,    25,    22,   161,    34,   244,   217,    31,   189,
     193,    93,    63,    62,   337,   201,   273,    54,    33,    59,
     274,   101,   103,    75,    65,    66,   163,   164,    67,    13,
      33,   101,   103,   172,    56,    61,   263,   330,   338,   339,
      57,   264,   166,    73,     5,    71,   336,    61,    21,   218,
      56,    33,   233,   234,   312,   128,   129,   130,   131,   313,
     119,    76,     1,   123,   191,   109,   110,   111,    61,     4,
     240,    56,   242,   181,    56,   247,   182,    74,    83,   183,
     208,    21,   219,   108,   109,   110,   111,   300,   301,     6,
     128,   129,   130,   131,   162,   220,   251,   101,   253,   254,
     207,   132,   128,   129,   130,   131,   221,   133,   249,   222,
      89,   123,   257,    83,   223,   258,    90,    91,   252,   112,
     192,   113,     9,   243,    17,    83,    89,   134,    10,    10,
     135,   136,    90,    91,   278,   229,   132,   230,   112,   212,
     113,   213,   214,   215,   259,    89,   238,   260,   132,   324,
     296,    90,    91,   297,   307,   308,    28,    89,   299,   311,
      29,   302,   134,    90,    91,   135,   136,    58,   187,   190,
     244,    30,    30,    30,   134,   255,    13,   135,   136,   244,
      16,   268,   270,   271,    62,   162,   267,   269,   162,   207,
     188,    21,   266,   188,   272,   128,   129,   130,   131,   301,
     231,   232,   335,    38,    39,    19,    40,    41,    42,   301,
     319,   320,   341,   276,   277,   323,    23,    89,    83,    27,
      89,    43,   181,    90,    91,    44,    90,    91,   183,    45,
     288,   289,    30,   328,    46,   292,   293,   101,   103,    33,
     101,    36,   101,   103,   315,   316,    62,   317,    62,   314,
      89,    47,   279,   280,   281,   282,    90,    91,   346,    48,
      49,   101,   290,   291,   101,   103,    37,    55,   168,    60,
     101,    68,    64,    69,   101,   103,    72,   101,   103,    70,
     101,   103,   169,   118,   170,   171,   101,   103,   120,   117,
     126,   127,   327,    62,   172,   224,   225,   226,   227,   228,
     150,   151,   155,   156,   173,   174,   157,   158,   159,   160,
     175,    78,   167,   176,   186,   197,   200,   202,   177,   210,
     216,    79,   178,   235,   236,    80,   237,    81,   179,   246,
     256,   180,   248,    82,   181,    83,    84,   182,    85,   241,
     183,    78,   261,   321,   295,   265,    86,    87,   326,    61,
     298,    79,   303,   304,    88,    80,   306,    81,   309,   322,
     318,   165,   305,    82,   325,    83,    84,    89,    85,   329,
     332,    78,   331,    90,    91,   334,    86,    87,   345,   343,
     340,    79,   347,   342,    88,    80,   344,    81,    18,   107,
      14,   310,   348,    82,   209,    83,    84,    89,    85,   211,
     262,   275,   250,    90,    91,   294,    86,    87,   283,   284,
     285,   286,   287,     0,    88,     0,     0,    38,    39,     0,
      40,    41,    42,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,    90,    91,    43,     0,     0,     0,    44,
       0,     0,     0,    45,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    49
};

static const yytype_int16 yycheck[] =
{
      61,    61,    16,    14,    89,    22,   158,     3,    21,    25,
     112,    61,    34,    34,    32,   117,    65,    27,    33,    32,
      69,    82,    82,    30,    38,    39,    90,    91,    42,    11,
      33,    92,    92,    30,    66,    50,    66,   322,    56,    57,
      72,    71,    92,    57,     0,    55,   331,    50,    63,    45,
      66,    33,    86,    87,    66,    13,    14,    15,    16,    71,
      74,    68,    51,    76,    13,    14,    15,    16,    50,    36,
     155,    66,   157,    70,    66,   160,    73,    72,    36,    76,
      72,    63,    78,    13,    14,    15,    16,    65,    66,    60,
      13,    14,    15,    16,    36,    24,   181,   158,   183,   184,
     122,    59,    13,    14,    15,    16,    35,    65,   172,    38,
      68,   124,    66,    36,    43,    69,    74,    75,   182,    68,
      69,    70,    65,    65,    32,    36,    68,    85,    36,    36,
      88,    89,    74,    75,   219,    17,    59,    19,    68,   132,
      70,   134,   135,   136,    66,    68,    69,    69,    59,   301,
      66,    74,    75,    69,   256,   257,    32,    68,   243,   261,
      36,   246,    85,    74,    75,    88,    89,    32,    32,    32,
     322,    36,    36,    36,    85,   189,    11,    88,    89,   331,
      25,   203,   204,   205,   205,    36,   203,   204,    36,   211,
     104,    63,   203,   107,   208,    13,    14,    15,    16,    66,
      84,    85,    69,     5,     6,    36,     8,     9,    10,    66,
     295,   296,    69,   217,   218,   300,     7,    68,    36,    25,
      68,    23,    70,    74,    75,    27,    74,    75,    76,    31,
     229,   230,    36,   318,    36,   233,   234,   298,   298,    33,
     301,    44,   303,   303,   266,   267,   267,   269,   269,   266,
      68,    53,   220,   221,   222,   223,    74,    75,   343,    61,
      62,   322,   231,   232,   325,   325,    65,    25,     4,    36,
     331,    50,    65,    50,   335,   335,    36,   338,   338,    67,
     341,   341,    18,    65,    20,    21,   347,   347,    42,    67,
      30,    65,   314,   314,    30,    79,    80,    81,    82,    83,
      65,    36,    68,    36,    40,    41,    68,    68,    36,    68,
      46,    12,    65,    49,    65,    36,    65,    65,    54,    65,
      65,    22,    58,    52,    65,    26,    39,    28,    64,    68,
      29,    67,    69,    34,    70,    36,    37,    73,    39,    65,
      76,    12,    67,   298,    68,    65,    47,    48,   303,    50,
      69,    22,    69,    71,    55,    26,    65,    28,    13,    65,
      72,    32,    77,    34,    69,    36,    37,    68,    39,    69,
     325,    12,    65,    74,    75,    65,    47,    48,    32,    68,
     335,    22,    69,   338,    55,    26,   341,    28,    11,    69,
       8,   259,   347,    34,   124,    36,    37,    68,    39,   126,
     198,   211,   172,    74,    75,   235,    47,    48,   224,   225,
     226,   227,   228,    -1,    55,    -1,    -1,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    75,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    91,    92,    36,     0,    60,    95,    96,    65,
      36,    97,    98,    11,   108,    93,    25,    32,    98,    36,
     109,    63,   118,     7,    94,    99,   100,    25,    32,    36,
      36,   107,   119,    33,   120,   121,    44,    65,     5,     6,
       8,     9,    10,    23,    27,    31,    36,    53,    61,    62,
     101,   102,   103,   104,   101,    25,    66,    72,    32,   107,
      36,    50,   121,   127,    65,    99,    99,    99,    50,    50,
      67,   101,    36,    99,    72,    30,    68,   122,    12,    22,
      26,    28,    34,    36,    37,    39,    47,    48,    55,    68,
      74,    75,   128,   129,   130,   131,   133,   136,   138,   139,
     140,   142,   143,   145,   105,   106,   107,   105,    13,    14,
      15,    16,    68,    70,   110,   111,   115,    67,    65,    99,
      42,    99,   125,   107,   123,   124,    30,    65,    13,    14,
      15,    16,    59,    65,    85,    88,    89,   141,   142,   145,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      65,    36,   127,   129,   135,    68,    36,    68,    68,    36,
      68,   147,    36,   143,   143,    32,   129,    65,     4,    18,
      20,    21,    30,    40,    41,    46,    49,    54,    58,    64,
      67,    70,    73,    76,   132,   144,    65,    32,   106,    25,
      32,    13,    69,   110,   112,   113,   114,    36,   116,   117,
      65,   110,    65,   108,   118,   120,   126,   127,    72,   124,
      65,   125,   156,   156,   156,   156,    65,     3,    45,    78,
      24,    35,    38,    43,    79,    80,    81,    82,    83,    17,
      19,    84,    85,    86,    87,    52,    65,    39,    69,   146,
     147,    65,   147,    65,   131,   137,    68,   147,    69,   143,
     144,   147,   143,   147,   147,    99,    29,    66,    69,    66,
      69,    67,   117,    66,    71,    65,   118,   120,   127,   120,
     127,   127,    99,    65,    69,   126,   149,   149,   147,   150,
     150,   150,   150,   151,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,    68,    66,    69,    69,   147,
      65,    66,   147,    69,    71,    77,    65,   110,   110,    13,
     114,   110,    66,    71,   120,   127,   127,   127,    72,   147,
     147,   135,    65,   147,   131,    69,   135,   127,   147,    69,
     137,    65,   135,   134,    65,    69,   137,    32,    56,    57,
     135,    69,   135,    68,   135,    32,   147,    69,   135
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    93,    93,    94,    95,    96,    96,
      97,    97,    98,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     105,   105,   106,   107,   107,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   112,   112,   113,
     113,   114,   115,   115,   116,   116,   117,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   124,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   128,
     128,   129,   129,   129,   129,   129,   129,   130,   130,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   136,   136,   137,   137,   138,   138,   138,   139,   140,
     140,   141,   141,   141,   141,   142,   142,   142,   142,   142,
     143,   143,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   149,   149,   149,   149,   149,
     150,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   155,   155,   155,
     155,   155,   156,   156,   156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     0,     2,     3,     5,     0,     3,
       1,     2,     4,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     4,     4,
       1,     2,     4,     1,     3,     3,     6,     7,     1,     1,
       1,     1,     1,     1,     3,     3,     2,     1,     3,     1,
       3,     3,     3,     4,     2,     3,     3,     3,     4,     5,
       1,     2,     5,     6,     4,     2,     3,     3,     1,     1,
       1,     2,     2,     3,     2,     3,     3,     4,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     9,     0,     6,     1,     1,     5,     7,
       8,     9,     6,     1,     3,     3,     2,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     3,     3,     2,     3,
       1,     3,     2,     2,     3,     3,     3,     4,     1,     3,
       1,     5,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 26 "cutre.y" /* yacc.c:1646  */
    { printf ("ACEPTAR: programa -> cabecera bloque\n"); }
#line 1560 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 29 "cutre.y" /* yacc.c:1646  */
    { printf ("  cabecera -> PROGRAMA ID ';' fichs_cabecera\n"); }
#line 1566 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "cutre.y" /* yacc.c:1646  */
    { printf ("  fichs_cabecera -> \n"); }
#line 1572 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 34 "cutre.y" /* yacc.c:1646  */
    { printf ("  fichs_cabecera -> fichs_cabecera fich_cabecera\n"); }
#line 1578 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "cutre.y" /* yacc.c:1646  */
    { printf ("  fich_cabecera -> CABECERA PATH\n"); }
#line 1584 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 46 "cutre.y" /* yacc.c:1646  */
    { printf ("  blq -> decl_tipos decl_ctcs decl_vars decl_funs blq_ins\n"); }
#line 1590 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "cutre.y" /* yacc.c:1646  */
    { printf ("  decl_tipos -> \n"); }
#line 1596 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 55 "cutre.y" /* yacc.c:1646  */
    { printf ("  decl_tipos -> TIPO lista_declr_tipos FIN\n"); }
#line 1602 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 59 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_declr_tipos -> declr_tipo\n"); }
#line 1608 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_declr_tipos -> lista_declr_tipos declr_tipo\n"); }
#line 1614 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 63 "cutre.y" /* yacc.c:1646  */
    { printf ("  declr_tipo -> ID ES espec_tipo\n"); }
#line 1620 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "cutre.y" /* yacc.c:1646  */
    { printf ("  espec_tipo -> refs tipo_basico\n"); }
#line 1626 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 71 "cutre.y" /* yacc.c:1646  */
    { printf ("  refs -> \n"); }
#line 1632 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 72 "cutre.y" /* yacc.c:1646  */
    { printf ("  refs -> refs REF\n"); }
#line 1638 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> ID\n"); }
#line 1644 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> tipo_escalar\n"); }
#line 1650 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> tipo_enum\n"); }
#line 1656 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_basico -> tipo_struct\n"); }
#line 1662 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> ENTERO\n"); }
#line 1668 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 84 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> REAL\n"); }
#line 1674 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 85 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> CARACTER\n"); }
#line 1680 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> CADENA\n"); }
#line 1686 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_escalar -> FICHERO\n"); }
#line 1692 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "cutre.y" /* yacc.c:1646  */
    { printf ("  array -> ARRAY espec_tipo\n"); }
#line 1698 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 92 "cutre.y" /* yacc.c:1646  */
    { printf ("  array -> HASH espec_tipo\n"); }
#line 1704 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 93 "cutre.y" /* yacc.c:1646  */
    { printf ("  array -> CONJUNTO espec_tipo\n"); }
#line 1710 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_struct -> ESTRUCT PRINCPIO lista_campos FIN\n"); }
#line 1716 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 98 "cutre.y" /* yacc.c:1646  */
    { printf ("  tipo_struct -> UNION PRINCPIO lista_campos FIN\n"); }
#line 1722 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 102 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_campos -> linea_campos\n"); }
#line 1728 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 103 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_campos -> lista_campos linea_campos\n"); }
#line 1734 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 107 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_campos -> lista_ids ES espec_tipo\n"); }
#line 1740 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 111 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_ids -> ID\n"); }
#line 1746 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 112 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_ids -> lista_ids ',' ID\n"); }
#line 1752 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "cutre.y" /* yacc.c:1646  */
    { printf ("  declaraciones_constantes -> declaracion_constante\n"); }
#line 1758 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 124 "cutre.y" /* yacc.c:1646  */
    { printf ("  declaracion_constante -> ID\n"); }
#line 1764 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "cutre.y" /* yacc.c:1646  */
    { printf ("  declaracion_constante -> ID\n"); }
#line 1770 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 129 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> CTC_ENTERA\n"); }
#line 1776 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 130 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> CTC_REAL\n"); }
#line 1782 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> CTC_CARACTER\n"); }
#line 1788 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> CTC_CADENA\n"); }
#line 1794 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> constante_enumerada\n"); }
#line 1800 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante -> constante_estructurada\n"); }
#line 1806 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_enumerada -> (const_completa)\n"); }
#line 1812 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 139 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_enumerada -> (hash_completa)\n"); }
#line 1818 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_enumerada -> \n"); }
#line 1824 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 145 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_completa -> constante\n"); }
#line 1830 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 146 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_completa ->constante_completa ',' constante\n"); }
#line 1836 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "cutre.y" /* yacc.c:1646  */
    { printf ("  hash_completa -> elemento_hash\n"); }
#line 1842 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "cutre.y" /* yacc.c:1646  */
    { printf ("  hash_completa -> hash_completa ',' elemento_hash\n"); }
#line 1848 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "cutre.y" /* yacc.c:1646  */
    { printf ("  const_cadena -> CTC_CADENA '=>' const \n"); }
#line 1854 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 161 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_estructurada -> { campo_constante } \n"); }
#line 1860 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 162 "cutre.y" /* yacc.c:1646  */
    { printf ("  constante_estructurada -> { campo_const_coma campo_constante } '=>' const \n"); }
#line 1866 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "cutre.y" /* yacc.c:1646  */
    { printf ("  campo_const_coma -> { campo_constante ',' } \n"); }
#line 1872 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "cutre.y" /* yacc.c:1646  */
    { printf ("  campo_const_coma -> { campo_const_coma campo_constante ',' } \n"); }
#line 1878 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 171 "cutre.y" /* yacc.c:1646  */
    { printf ("  campo_constante -> IDENTIFICADOR '=' constante \n"); }
#line 1884 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 178 "cutre.y" /* yacc.c:1646  */
    { printf ("declaraciones_variables -> declaracion_variables\n"); }
#line 1890 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 182 "cutre.y" /* yacc.c:1646  */
    { printf ("declaracion_variables -> lista_identificadores ':' especificacion_tipo\n"); }
#line 1896 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 183 "cutre.y" /* yacc.c:1646  */
    { printf ("declaracion_variables -> declaracion_variables lista_identificadores ':' especificacion_tipo\n"); }
#line 1902 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 192 "cutre.y" /* yacc.c:1646  */
    { printf ("declaraciones_funciones -> declaracion_funcion\n"); }
#line 1908 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 193 "cutre.y" /* yacc.c:1646  */
    { printf ("declaraciones_funciones -> declaraciones_funciones declaracion_funcion\n"); }
#line 1914 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "cutre.y" /* yacc.c:1646  */
    { printf ("declaraciones_funciones -> tipo_salida cuerpo_funcion\n"); }
#line 1920 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 198 "cutre.y" /* yacc.c:1646  */
    { printf ("declaraciones_funciones -> lista_parametros FLECHA_SIMPLE tipo_salida cuerpo_funcion\n"); }
#line 1926 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 203 "cutre.y" /* yacc.c:1646  */
    { printf ("lista_parametros -> '(' conj_parametros parametros ')'\n"); }
#line 1932 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 207 "cutre.y" /* yacc.c:1646  */
    { printf ("conj_parametros ->  parametros ';' \n"); }
#line 1938 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 208 "cutre.y" /* yacc.c:1646  */
    { printf ("conj_parametros ->  conj_parametros parametros ';' \n"); }
#line 1944 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 212 "cutre.y" /* yacc.c:1646  */
    { printf ("parametros -> lista_identificadores ':' especificacion_tipo\n"); }
#line 1950 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 216 "cutre.y" /* yacc.c:1646  */
    { printf ("tipo_salida -> especificacion_tipo\n"); }
#line 1956 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 217 "cutre.y" /* yacc.c:1646  */
    { printf ("tipo_salida -> NADA\n"); }
#line 1962 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 221 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> bloque_instrucciones\n"); }
#line 1968 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 222 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_funciones bloque_instrucciones\n"); }
#line 1974 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 223 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_variables  bloque_instrucciones\n"); }
#line 1980 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 224 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_variables declaraciones_funciones bloque_instrucciones\n"); }
#line 1986 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 225 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_constantes bloque_instrucciones\n"); }
#line 1992 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 226 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_funciones bloque_instrucciones\n"); }
#line 1998 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 227 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_variables bloque_instrucciones\n"); }
#line 2004 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 228 "cutre.y" /* yacc.c:1646  */
    { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_variables declaraciones_funciones  bloque_instrucciones\n"); }
#line 2010 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 232 "cutre.y" /* yacc.c:1646  */
    { printf ("bloque_instrucciones -> PRINCIPIO instrucciones FIN \n"); }
#line 2016 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 236 "cutre.y" /* yacc.c:1646  */
    { printf ("instrucciones -> instruccion \n"); }
#line 2022 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "cutre.y" /* yacc.c:1646  */
    { printf ("instrucciones -> instrucciones instruccion \n"); }
#line 2028 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 245 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_expresion\n"); }
#line 2034 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 246 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_bifurcacion\n"); }
#line 2040 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 247 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_bucle\n"); }
#line 2046 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 248 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_salto\n"); }
#line 2052 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 249 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_destino_salto\n"); }
#line 2058 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 250 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion -> instruccion_devolver\n"); }
#line 2064 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_expresion -> expresion_funcional ';' \n"); }
#line 2070 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_expresion -> asignacion ';' \n"); }
#line 2076 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 259 "cutre.y" /* yacc.c:1646  */
    { printf ("  asignacion -> expresion_indexada ASIGN expresion\n"); }
#line 2082 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 263 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador '='\n"); }
#line 2088 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 264 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador POT_ASIG \n"); }
#line 2094 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 265 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador MULT_ASIG \n"); }
#line 2100 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 266 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador DIV_ASIG \n"); }
#line 2106 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 267 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador MOD_ASIG \n"); }
#line 2112 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 268 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador SUMA_ASIG \n"); }
#line 2118 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 269 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador RESTA_ASIG \n"); }
#line 2124 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 270 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador DESPI_ASIG \n"); }
#line 2130 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 271 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador DESPD_ASIG \n"); }
#line 2136 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 272 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador AND_ASIG \n"); }
#line 2142 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 273 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador XOR_ASIG \n"); }
#line 2148 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 274 "cutre.y" /* yacc.c:1646  */
    { printf ("  operador_asignacion -> operador OR_ASIG \n"); }
#line 2154 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 278 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bifurcacion -> SI (X) {Y} FIN \n"); }
#line 2160 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 279 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bifurcacion -> SI (X) {Y} ELSE FIN \n"); }
#line 2166 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 283 "cutre.y" /* yacc.c:1646  */
    { printf ("  otros_casos -> \n"); }
#line 2172 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 284 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bifurcacion ->otros_casos SI_ENCAMBIO (X) {Y} \n"); }
#line 2178 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 289 "cutre.y" /* yacc.c:1646  */
    { printf ("  accion -> instruccion \n"); }
#line 2184 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 290 "cutre.y" /* yacc.c:1646  */
    { printf ("  accion -> bloque_instrucciones \n"); }
#line 2190 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 294 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bucle -> while \n"); }
#line 2196 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 295 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bucle -> dowhile \n"); }
#line 2202 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 296 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bucle -> empty_for \n"); }
#line 2208 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 297 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bucle -> for \n"); }
#line 2214 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 298 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_bucle -> foreach \n"); }
#line 2220 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 301 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_asignaciones -> asignacion \n"); }
#line 2226 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 302 "cutre.y" /* yacc.c:1646  */
    { printf ("  lista_asignaciones -> lista_asignaciones asignacion  \n"); }
#line 2232 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 306 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_salto -> ir_a ID \n"); }
#line 2238 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 307 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_salto -> continuar \n"); }
#line 2244 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 308 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_salto -> escape \n"); }
#line 2250 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 312 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_destino_salto -> etiqueta ID \n"); }
#line 2256 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 316 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> return \n"); }
#line 2262 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 317 "cutre.y" /* yacc.c:1646  */
    { printf ("  instruccion_devolver -> return expresion \n"); }
#line 2268 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 325 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_const -> CTC_ENTERA\n"); }
#line 2274 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 326 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_const -> CTC_REAL\n"); }
#line 2280 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 327 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_const -> CTC_CADENA\n"); }
#line 2286 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 328 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_const -> CTC_CARACTER\n"); }
#line 2292 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 332 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_indexada -> expr_basica \n"); }
#line 2298 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 333 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_indexada -> expr_indexada ',' expr_basica \n"); }
#line 2304 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 334 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_indexada -> expr_indexada '->' expr_basica \n"); }
#line 2310 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 335 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_indexada -> expr_indexada index \n"); }
#line 2316 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 336 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_indexada -> expr_indexada '->' index \n"); }
#line 2322 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 340 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_basica -> ID \n"); }
#line 2328 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 341 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_basica -> '(' expr ')' \n"); }
#line 2334 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 342 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_basica -> '^' expr_basica \n"); }
#line 2340 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 343 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_basica -> '\' expr_basica \n"); }
#line 2346 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 347 "cutre.y" /* yacc.c:1646  */
    { printf ("  index -> '[' expr ']' \n"); }
#line 2352 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 348 "cutre.y" /* yacc.c:1646  */
    { printf ("  index -> '{' expr '}' \n"); }
#line 2358 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 352 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_func -> ID '()' \n"); }
#line 2364 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 353 "cutre.y" /* yacc.c:1646  */
    { printf ("  expr_func -> ID '(' lista_expresiones ')' \n"); }
#line 2370 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 357 "cutre.y" /* yacc.c:1646  */
    { printf ("  list_expr -> expr \n"); }
#line 2376 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 358 "cutre.y" /* yacc.c:1646  */
    { printf ("  list_expr -> list_expr ',' expr expr \n"); }
#line 2382 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 362 "cutre.y" /* yacc.c:1646  */
    { printf ("  expresion -> expresion_logica \n"); }
#line 2388 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 363 "cutre.y" /* yacc.c:1646  */
    { printf ("  expresion -> expresion_logica '?' expresion ':' expresion \n"); }
#line 2394 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 367 "cutre.y" /* yacc.c:1646  */
    { printf ("  expresion_logica -> expresion_logica AND prioridad8 \n"); }
#line 2400 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 368 "cutre.y" /* yacc.c:1646  */
    { printf ("  expresion_logica -> expresion_logica OR prioridad8 \n"); }
#line 2406 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 373 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad8 -> prioridad8 GE prioridad7 \n"); }
#line 2412 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 374 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad8 -> prioridad8 LE prioridad7 \n"); }
#line 2418 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 375 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad8 -> prioridad8 EQ prioridad7 \n"); }
#line 2424 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 376 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad8 -> prioridad8 NEQ prioridad7 \n"); }
#line 2430 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 377 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad8 -> prioridad7 \n"); }
#line 2436 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 381 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad7 '&' prioridad6 \n"); }
#line 2442 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 382 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad7 '@' prioridad6 \n"); }
#line 2448 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 383 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad7 '|' prioridad6 \n"); }
#line 2454 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 384 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad7 '>' prioridad6 \n"); }
#line 2460 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 385 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad7 '<' prioridad6 \n"); }
#line 2466 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 386 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad7 -> prioridad6 \n"); }
#line 2472 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 390 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad6 -> prioridad6 DESPI prioridad5 \n"); }
#line 2478 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 391 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad6 -> prioridad6 DESPD prioridad5 \n"); }
#line 2484 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 392 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad6 -> prioridad5 \n"); }
#line 2490 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 396 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad5 -> prioridad5 '+' prioridad4  \n"); }
#line 2496 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 397 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad5 -> prioridad5 '-' prioridad4 \n"); }
#line 2502 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 398 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad5 -> prioridad4 \n"); }
#line 2508 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 402 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad4 -> prioridad4 '*' prioridad3 \n"); }
#line 2514 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 403 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad4 -> prioridad4 '/' prioridad3 \n"); }
#line 2520 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 404 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad4 -> prioridad3 \n"); }
#line 2526 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 408 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad3 -> prioridad3 POTENCIA prioridad2 \n"); }
#line 2532 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 409 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad3 -> prioridad2 \n"); }
#line 2538 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 413 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad2 -> TAMANO prioridad1 \n"); }
#line 2544 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 414 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad2 -> '!' prioridad1 \n"); }
#line 2550 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 415 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad2 -> '~' prioridad1 \n"); }
#line 2556 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 416 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad2 -> '-' prioridad1 \n"); }
#line 2562 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 417 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad2 -> prioridad1 \n"); }
#line 2568 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 421 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad1 -> expresion_constante \n"); }
#line 2574 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 422 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad1 -> expresion_funcional \n"); }
#line 2580 "cutre.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 423 "cutre.y" /* yacc.c:1646  */
    { printf ("  prioridad1 -> expresion_indexada \n"); }
#line 2586 "cutre.tab.c" /* yacc.c:1646  */
    break;


#line 2590 "cutre.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 426 "cutre.y" /* yacc.c:1906  */


int yyerror(char *s) {
  fflush(stdout);
  printf("*****************, %s\n",s);
  }

int yywrap() {
  return(1);
  }

int main(int argc, char *argv[]) {

//  yydebug = 0;

  if (argc < 2) {
    printf("Uso: ./cutre NombreArchivo\n");
    }
  else {
    yyin = fopen(argv[1],"r");
    yyparse();
    }
  }
