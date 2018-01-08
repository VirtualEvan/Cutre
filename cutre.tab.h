/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
