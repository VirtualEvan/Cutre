
%{

  #include <stdio.h>
  extern FILE *yyin;
  extern int yylex();

  #define YYDEBUG 1
%}

%token AND AND_ASIG ARRAY HASH CABECERA CADENA CARACTER CONJUNTO CONSTANTES
%token CONTINUAR CTC_CADENA CTC_CARACTER CTC_ENTERA CTC_REAL DESPD DESPD_ASIG
%token DESPI DESPI_ASIG DIV_ASIG DEVOLVER ENTERO EQ ES ESCAPE ESTRUCTURA ETIQUETA
%token FLECHA_DOBLE FLECHA_SIMPLE FICHERO FIN FUNCION HAZ GE IDENTIFICADOR
%token IR_A LE MIENTRAS MOD_ASIG MULT_ASIG NADA NEQ PATH OR OR_ASIG PARA PARA_CADA
%token POT_ASIG PRINCIPIO PROGRAMA POTENCIA REAL RESTA_ASIG SI SINO SI_ENCAMBIO
%token SUMA_ASIG TAMANO TIPOS REF UNION VARIABLES XOR_ASIG


%%

/************/
/* programa */
/************/

programa: cabecera bloque  { printf ("ACEPTAR: programa -> cabecera bloque\n"); }
    ;

cabecera: PROGRAMA IDENTIFICADOR ';' ficheros_cabecera { printf ("  cabecera -> PROGRAMA ID ';' fichs_cabecera\n"); }
    ;

ficheros_cabecera
    :                                     { printf ("  fichs_cabecera -> \n"); }
    | ficheros_cabecera fichero_cabecera  { printf ("  fichs_cabecera -> fichs_cabecera fich_cabecera\n"); }
    ;

fichero_cabecera
    : CABECERA PATH ';'  { printf ("  fich_cabecera -> CABECERA PATH\n"); }
    ;

bloque
    : declaraciones_tipos
      declaraciones_constantes
      declaraciones_variables
      declaraciones_funciones
      bloque_instrucciones    { printf ("  blq -> decl_tipos decl_ctcs decl_vars decl_funs blq_ins\n"); }
    ;

/************************/
/* declaracion de tipos */
/************************/

declaraciones_tipos
    :                                     { printf ("  decl_tipos -> \n"); }
    | TIPOS lista_declaraciones_tipo FIN  { printf ("  decl_tipos -> TIPO lista_declr_tipos FIN\n"); }
    ;

lista_declaraciones_tipo
    : declaracion_tipo                           { printf ("  lista_declr_tipos -> declr_tipo\n"); }
    | lista_declaraciones_tipo declaracion_tipo  { printf ("  lista_declr_tipos -> lista_declr_tipos declr_tipo\n"); }
    ;

declaracion_tipo: IDENTIFICADOR ES especificacion_tipo ';'  { printf ("  declr_tipo -> ID ES espec_tipo\n"); }
    ;

especificacion_tipo
    : referencias tipo_basico  { printf ("  espec_tipo -> refs tipo_basico\n"); }
    ;

referencias
    :                  { printf ("  refs -> \n"); }
    | referencias REF  { printf ("  refs -> refs REF\n"); }
    ;

tipo_basico
    : IDENTIFICADOR      { printf ("  tipo_basico -> ID\n"); }
    | tipo_escalar       { printf ("  tipo_basico -> tipo_escalar\n"); }
    | tipo_enumerado     { printf ("  tipo_basico -> tipo_enum\n"); }
    | tipo_estructurado  { printf ("  tipo_basico -> tipo_struct\n"); }
    ;

tipo_escalar
    : ENTERO    { printf ("  tipo_escalar -> ENTERO\n"); }
    | REAL      { printf ("  tipo_escalar -> REAL\n"); }
    | CARACTER  { printf ("  tipo_escalar -> CARACTER\n"); }
    | CADENA    { printf ("  tipo_escalar -> CADENA\n"); }
    | FICHERO   { printf ("  tipo_escalar -> FICHERO\n"); }
    ;

tipo_enumerado
    : ARRAY especificacion_tipo     { printf ("  array -> ARRAY espec_tipo\n"); }
    | HASH especificacion_tipo      { printf ("  array -> HASH espec_tipo\n"); }
    | CONJUNTO especificacion_tipo  { printf ("  array -> CONJUNTO espec_tipo\n"); }
    ;

tipo_estructurado
    : ESTRUCTURA PRINCIPIO lista_campos FIN  { printf ("  tipo_struct -> ESTRUCT PRINCPIO lista_campos FIN\n"); }
    | UNION PRINCIPIO lista_campos FIN       { printf ("  tipo_struct -> UNION PRINCPIO lista_campos FIN\n"); }
    ;

lista_campos
    : linea_campo               { printf ("  lista_campos -> linea_campos\n"); }
    | lista_campos linea_campo  { printf ("  lista_campos -> lista_campos linea_campos\n"); }
    ;

linea_campo
    : lista_identificadores ES especificacion_tipo ';'  { printf ("  lista_campos -> lista_ids ES espec_tipo\n"); }
    ;

lista_identificadores
    : IDENTIFICADOR                            { printf ("  lista_ids -> ID\n"); }
    | lista_identificadores ',' IDENTIFICADOR  { printf ("  lista_ids -> lista_ids ',' ID\n"); }
    ;

/*****************************/
/* declaracion de constantes */
/*****************************/

declaraciones_constantes
    : CONSTANTES declaracion_constante  FIN     { printf ("  declaraciones_constantes -> declaracion_constante\n"); }
    ;

declaracion_constante
    : IDENTIFICADOR ES tipo_basico '=' constante ';'          { printf ("  declaracion_constante -> ID\n"); }
    | declaracion_constante IDENTIFICADOR ES tipo_basico '=' constante ';'          { printf ("  declaracion_constante -> ID\n"); }
    ;

constante
    : CTC_ENTERA              { printf ("  constante -> CTC_ENTERA\n"); }
    | CTC_REAL                { printf ("  constante -> CTC_REAL\n"); }
    | CTC_CARACTER            { printf ("  constante -> CTC_CARACTER\n"); }
    | CTC_CADENA              { printf ("  constante -> CTC_CADENA\n"); }
    | constante_enumerada     { printf ("  constante -> constante_enumerada\n"); }
    | constante_estructurada    { printf ("  constante -> constante_estructurada\n"); }
    ;

constante_enumerada
    :  '(' constante_completa ')' { printf ("  constante_enumerada -> (const_completa)\n"); }
    |  '(' hash_completa ')'      { printf ("  constante_enumerada -> (hash_completa)\n"); }
    |  '(' ')'                    { printf ("  constante_enumerada -> \n"); }
    ;

//ENUMERADA
constante_completa
    :   constante                         { printf ("  constante_completa -> constante\n"); }
    |   constante_completa ',' constante  { printf ("  constante_completa ->constante_completa ',' constante\n"); }
    ;


//HAS
hash_completa
    :   elemento_hash                     { printf ("  hash_completa -> elemento_hash\n"); }
    |   hash_completa ',' elemento_hash   { printf ("  hash_completa -> hash_completa ',' elemento_hash\n"); }
    ;

elemento_hash
    :   CTC_CADENA FLECHA_DOBLE constante           { printf ("  const_cadena -> CTC_CADENA '=>' const \n"); }
    ;

constante_estructurada
    :  '{' campo_constante '}'                      { printf ("  constante_estructurada -> { campo_constante } \n"); }
    |  '{' campo_const_coma campo_constante '}'     { printf ("  constante_estructurada -> { campo_const_coma campo_constante } '=>' const \n"); }
    ;

campo_const_coma
    :   campo_constante ','                         { printf ("  campo_const_coma -> { campo_constante ',' } \n"); }
    |   campo_const_coma campo_constante ','        { printf ("  campo_const_coma -> { campo_const_coma campo_constante ',' } \n"); }
    ;

campo_constante
    : IDENTIFICADOR '=' constante                   { printf ("  campo_constante -> IDENTIFICADOR '=' constante \n"); }
    ;

/****************************/
/* declaracion de variables */
/****************************/
declaraciones_variables
    : VARIABLES declaracion_variables FIN           { printf ("declaraciones_variables -> declaracion_variables\n"); }
    ;

declaracion_variables
    : lista_identificadores ':' especificacion_tipo ';'                         { printf ("declaracion_variables -> lista_identificadores ':' especificacion_tipo\n"); }
    | declaracion_variables lista_identificadores ':' especificacion_tipo ';'  { printf ("declaracion_variables -> declaracion_variables lista_identificadores ':' especificacion_tipo\n"); }
    ;


/****************************/
/* declaracion de funciones */
/****************************/

declaraciones_funciones
    : declaracion_funcion                                 { printf ("declaraciones_funciones -> declaracion_funcion\n"); }
    | declaraciones_funciones declaracion_funcion         { printf ("declaraciones_funciones -> declaraciones_funciones declaracion_funcion\n"); }
    ;

declaracion_funcion
    : FUNCION IDENTIFICADOR FLECHA_SIMPLE tipo_salida cuerpo_funcion           { printf ("declaraciones_funciones -> tipo_salida cuerpo_funcion\n"); }
    | FUNCION IDENTIFICADOR lista_parametros FLECHA_SIMPLE tipo_salida cuerpo_funcion           { printf ("declaraciones_funciones -> lista_parametros FLECHA_SIMPLE tipo_salida cuerpo_funcion\n"); }
    ;


lista_parametros
    : '(' conj_parametros parametros ')'            { printf ("lista_parametros -> '(' conj_parametros parametros ')'\n"); }
    ;

conj_parametros
    : parametros ';'                                { printf ("conj_parametros ->  parametros ';' \n"); }
    | conj_parametros parametros ';'                { printf ("conj_parametros ->  conj_parametros parametros ';' \n"); }
    ;

parametros
    : lista_identificadores ':' especificacion_tipo           { printf ("parametros -> lista_identificadores ':' especificacion_tipo\n"); }
    ;

tipo_salida
    : especificacion_tipo           { printf ("tipo_salida -> especificacion_tipo\n"); }
    | NADA           { printf ("tipo_salida -> NADA\n"); }
    ;

cuerpo_funcion
    : bloque_instrucciones           { printf ("cuerpo_funcion -> bloque_instrucciones\n"); }
    | declaraciones_funciones bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_funciones bloque_instrucciones\n"); }
    | declaraciones_variables  bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_variables  bloque_instrucciones\n"); }
    | declaraciones_variables declaraciones_funciones bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_variables declaraciones_funciones bloque_instrucciones\n"); }
    | declaraciones_constantes bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_constantes bloque_instrucciones\n"); }
    | declaraciones_constantes declaraciones_funciones bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_funciones bloque_instrucciones\n"); }
    | declaraciones_constantes declaraciones_variables bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_variables bloque_instrucciones\n"); }
    | declaraciones_constantes declaraciones_variables declaraciones_funciones  bloque_instrucciones           { printf ("cuerpo_funcion -> declaraciones_constantes declaraciones_variables declaraciones_funciones  bloque_instrucciones\n"); }
    ;

bloque_instrucciones
    : PRINCIPIO instrucciones FIN           { printf ("bloque_instrucciones -> PRINCIPIO instrucciones FIN \n"); }
    ;

instrucciones
    : instruccion                         { printf ("instrucciones -> instruccion \n"); }
    | instrucciones instruccion           { printf ("instrucciones -> instrucciones instruccion \n"); }
    ;

/*****************/
/* instrucciones */
/*****************/

instruccion
    : instruccion_expresion               { printf ("  instruccion -> instruccion_expresion\n"); }
    | instruccion_bifurcacion             { printf ("  instruccion -> instruccion_bifurcacion\n"); }
    | instruccion_bucle                   { printf ("  instruccion -> instruccion_bucle\n"); }
    | instruccion_salto                   { printf ("  instruccion -> instruccion_salto\n"); }
    | instruccion_destino_salto           { printf ("  instruccion -> instruccion_destino_salto\n"); }
    | instruccion_devolver                { printf ("  instruccion -> instruccion_devolver\n"); }
    ;

instruccion_expresion
    : expresion_funcional ';'             { printf ("  instruccion_expresion -> expresion_funcional ';' \n"); }
    | asignacion ';'                      { printf ("  instruccion_expresion -> asignacion ';' \n"); }
    ;

asignacion
    : expresion_indexada operador_asignacion expresion    { printf ("  asignacion -> expresion_indexada ASIGN expresion\n"); }
    ;

operador_asignacion
    : '='                       { printf ("  operador_asignacion -> operador '='\n"); }
    | POT_ASIG                  { printf ("  operador_asignacion -> operador POT_ASIG \n"); }
    | MULT_ASIG                 { printf ("  operador_asignacion -> operador MULT_ASIG \n"); }
    | DIV_ASIG                  { printf ("  operador_asignacion -> operador DIV_ASIG \n"); }
    | MOD_ASIG                  { printf ("  operador_asignacion -> operador MOD_ASIG \n"); }
    | SUMA_ASIG                 { printf ("  operador_asignacion -> operador SUMA_ASIG \n"); }
    | RESTA_ASIG                { printf ("  operador_asignacion -> operador RESTA_ASIG \n"); }
    | DESPI_ASIG                { printf ("  operador_asignacion -> operador DESPI_ASIG \n"); }
    | DESPD_ASIG                { printf ("  operador_asignacion -> operador DESPD_ASIG \n"); }
    | AND_ASIG                  { printf ("  operador_asignacion -> operador AND_ASIG \n"); }
    | XOR_ASIG                  { printf ("  operador_asignacion -> operador XOR_ASIG \n"); }
    | OR_ASIG                   { printf ("  operador_asignacion -> operador OR_ASIG \n"); }
    ;

instruccion_bifurcacion
    : SI '(' expresion ')' accion otros_casos FIN                        { printf ("  instruccion_bifurcacion -> SI (X) {Y} FIN \n"); }
    | SI '(' expresion ')' accion otros_casos SINO accion FIN            { printf ("  instruccion_bifurcacion -> SI (X) {Y} ELSE FIN \n"); }
    ;

otros_casos
    :                                                                   { printf ("  otros_casos -> \n"); }
    | otros_casos SI_ENCAMBIO '(' expresion ')' accion                  { printf ("  instruccion_bifurcacion ->otros_casos SI_ENCAMBIO (X) {Y} \n"); }
    ;


accion
    : instruccion                       { printf ("  accion -> instruccion \n"); }
    | bloque_instrucciones              { printf ("  accion -> bloque_instrucciones \n"); }
    ;

instruccion_bucle
    : MIENTRAS '(' expresion ')' accion                                             { printf ("  instruccion_bucle -> while \n"); }
    | HAZ accion MIENTRAS '(' expresion ')' ';'                                     { printf ("  instruccion_bucle -> dowhile \n"); }
    | PARA '(' ';' expresion ';' lista_asignaciones ')' accion                      { printf ("  instruccion_bucle -> empty_for \n"); }
    | PARA '(' lista_asignaciones ';' expresion ';' lista_asignaciones ')' accion   { printf ("  instruccion_bucle -> for \n"); }
    | PARA_CADA IDENTIFICADOR '(' expresion ')' accion                              { printf ("  instruccion_bucle -> foreach \n"); }

lista_asignaciones
    : asignacion                            { printf ("  lista_asignaciones -> asignacion \n"); }
    | lista_asignaciones ',' asignacion         { printf ("  lista_asignaciones -> lista_asignaciones asignacion  \n"); }
    ;

instruccion_salto
    : IR_A IDENTIFICADOR ';'                { printf ("  instruccion_salto -> ir_a ID \n"); }
    | CONTINUAR ';'                         { printf ("  instruccion_salto -> continuar \n"); }
    | ESCAPE ';'                            { printf ("  instruccion_salto -> escape \n"); }
    ;

instruccion_destino_salto
    : ETIQUETA IDENTIFICADOR ';'            { printf ("  instruccion_destino_salto -> etiqueta ID \n"); }
    ;

instruccion_devolver
    : DEVOLVER ';'                          { printf ("  instruccion_devolver -> return \n"); }
    | DEVOLVER expresion ';'                { printf ("  instruccion_devolver -> return expresion \n"); }
    ;

/***************/
/* expresiones */
/***************/

expresion_constante
    : CTC_ENTERA        { printf ("  expr_const -> CTC_ENTERA\n"); }
    | CTC_REAL          { printf ("  expr_const -> CTC_REAL\n"); }
    | CTC_CADENA        { printf ("  expr_const -> CTC_CADENA\n"); }
    | CTC_CARACTER      { printf ("  expr_const -> CTC_CARACTER\n"); }
    ;

expresion_indexada
    : expresion_basica                                        { printf ("  expr_indexada -> expr_basica \n"); }
    | expresion_indexada '.' expresion_basica                 { printf ("  expr_indexada -> expr_indexada ',' expr_basica \n"); }
    | expresion_indexada FLECHA_SIMPLE expresion_basica       { printf ("  expr_indexada -> expr_indexada '->' expr_basica \n"); }
    | expresion_indexada indice                               { printf ("  expr_indexada -> expr_indexada index \n"); }
    | expresion_indexada FLECHA_SIMPLE indice                 { printf ("  expr_indexada -> expr_indexada '->' index \n"); }
    ;

expresion_basica
    : IDENTIFICADOR                     { printf ("  expr_basica -> ID \n"); }
    | '(' expresion ')'                 { printf ("  expr_basica -> '(' expr ')' \n"); }
    | '^' expresion_basica              { printf ("  expr_basica -> '^' expr_basica \n"); }
    | '\\' expresion_basica              { printf ("  expr_basica -> '\' expr_basica \n"); }
    ;

indice
    : '[' expresion ']'                 { printf ("  index -> '[' expr ']' \n"); }
    | '{' expresion '}'                 { printf ("  index -> '{' expr '}' \n"); }
    ;

expresion_funcional
    : IDENTIFICADOR '(' ')'                     { printf ("  expr_func -> ID '()' \n"); }
    | IDENTIFICADOR '(' lista_expresiones ')'   { printf ("  expr_func -> ID '(' lista_expresiones ')' \n"); }
    ;

lista_expresiones
    : expresion                         { printf ("  list_expr -> expr \n"); }
    | lista_expresiones ',' expresion   { printf ("  list_expr -> list_expr ',' expr expr \n"); }
    ;

expresion
    : expresion_logica                                { printf ("  expresion -> expresion_logica \n"); }
    | expresion_logica '?' expresion ':' expresion    { printf ("  expresion -> expresion_logica '?' expresion ':' expresion \n"); }
    ;

expresion_logica
    : expresion_logica AND prioridad8                 { printf ("  expresion_logica -> expresion_logica AND prioridad8 \n"); }
    | expresion_logica OR prioridad8                  { printf ("  expresion_logica -> expresion_logica OR prioridad8 \n"); }
    | prioridad8
    ;

prioridad8
    : prioridad8 GE prioridad7                        { printf ("  prioridad8 -> prioridad8 GE prioridad7 \n"); }
    | prioridad8 LE prioridad7                        { printf ("  prioridad8 -> prioridad8 LE prioridad7 \n"); }
    | prioridad8 EQ prioridad7                        { printf ("  prioridad8 -> prioridad8 EQ prioridad7 \n"); }
    | prioridad8 NEQ prioridad7                       { printf ("  prioridad8 -> prioridad8 NEQ prioridad7 \n"); }
    | prioridad7                                      { printf ("  prioridad8 -> prioridad7 \n"); }
    ;

prioridad7
    : prioridad7 '&' prioridad6                       { printf ("  prioridad7 -> prioridad7 '&' prioridad6 \n"); }
    | prioridad7 '@' prioridad6                       { printf ("  prioridad7 -> prioridad7 '@' prioridad6 \n"); }
    | prioridad7 '|' prioridad6                       { printf ("  prioridad7 -> prioridad7 '|' prioridad6 \n"); }
    | prioridad7 '>' prioridad6                       { printf ("  prioridad7 -> prioridad7 '>' prioridad6 \n"); }
    | prioridad7 '<' prioridad6                       { printf ("  prioridad7 -> prioridad7 '<' prioridad6 \n"); }
    | prioridad6                                      { printf ("  prioridad7 -> prioridad6 \n"); }
    ;

prioridad6
    : prioridad6 DESPI prioridad5                     { printf ("  prioridad6 -> prioridad6 DESPI prioridad5 \n"); }
    | prioridad6 DESPD prioridad5                     { printf ("  prioridad6 -> prioridad6 DESPD prioridad5 \n"); }
    | prioridad5                                      { printf ("  prioridad6 -> prioridad5 \n"); }
    ;

prioridad5
    : prioridad5 '+' prioridad4                       { printf ("  prioridad5 -> prioridad5 '+' prioridad4  \n"); }
    | prioridad5 '-' prioridad4                       { printf ("  prioridad5 -> prioridad5 '-' prioridad4 \n"); }
    | prioridad4                                      { printf ("  prioridad5 -> prioridad4 \n"); }
    ;

prioridad4
    : prioridad4 '*' prioridad3                       { printf ("  prioridad4 -> prioridad4 '*' prioridad3 \n"); }
    | prioridad4 '/' prioridad3                       { printf ("  prioridad4 -> prioridad4 '/' prioridad3 \n"); }
    | prioridad3                                      { printf ("  prioridad4 -> prioridad3 \n"); }
    ;

prioridad3
    : prioridad3 POTENCIA prioridad2                  { printf ("  prioridad3 -> prioridad3 POTENCIA prioridad2 \n"); }
    | prioridad2                                      { printf ("  prioridad3 -> prioridad2 \n"); }
    ;

prioridad2
    : TAMANO prioridad1                               { printf ("  prioridad2 -> TAMANO prioridad1 \n"); }
    | '!' prioridad1                                  { printf ("  prioridad2 -> '!' prioridad1 \n"); }
    | '~' prioridad1                                  { printf ("  prioridad2 -> '~' prioridad1 \n"); }
    | '-' prioridad1                                  { printf ("  prioridad2 -> '-' prioridad1 \n"); }
    | prioridad1                                      { printf ("  prioridad2 -> prioridad1 \n"); }
    ;

prioridad1
    : expresion_constante                             { printf ("  prioridad1 -> expresion_constante \n"); }
    | expresion_funcional                             { printf ("  prioridad1 -> expresion_funcional \n"); }
    | expresion_indexada                              { printf ("  prioridad1 -> expresion_indexada \n"); }
    ;

%%

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
