/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _WHITEBOARD_H_RPCGEN
#define _WHITEBOARD_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct msg {
	char content[50];
};
typedef struct msg msg;

struct usuario {
	char nick[20];
	int id;
	int cor[3];
	struct usuario *next;
};
typedef struct usuario usuario;

struct quadro {
	char id[20];
	usuario *usuarios;
};
typedef struct quadro quadro;

struct history {
	struct history *next;
	quadro *quadros;
};
typedef struct history history;

#define WHITEBOARD_PROG 1111111
#define WHITEBOARD_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define NEW_QUADRO 1
extern  int * new_quadro_1(quadro *, CLIENT *);
extern  int * new_quadro_1_svc(quadro *, struct svc_req *);
#define SIGNIN_QUADRO 2
extern  msg * signin_quadro_1(quadro *, CLIENT *);
extern  msg * signin_quadro_1_svc(quadro *, struct svc_req *);
#define INICIALIZA 3
extern  void * inicializa_1(void *, CLIENT *);
extern  void * inicializa_1_svc(void *, struct svc_req *);
#define LISTAR_QUADROS 4
extern  history * listar_quadros_1(void *, CLIENT *);
extern  history * listar_quadros_1_svc(void *, struct svc_req *);
#define ERASE_USER 5
extern  msg * erase_user_1(quadro *, CLIENT *);
extern  msg * erase_user_1_svc(quadro *, struct svc_req *);
extern int whiteboard_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define NEW_QUADRO 1
extern  int * new_quadro_1();
extern  int * new_quadro_1_svc();
#define SIGNIN_QUADRO 2
extern  msg * signin_quadro_1();
extern  msg * signin_quadro_1_svc();
#define INICIALIZA 3
extern  void * inicializa_1();
extern  void * inicializa_1_svc();
#define LISTAR_QUADROS 4
extern  history * listar_quadros_1();
extern  history * listar_quadros_1_svc();
#define ERASE_USER 5
extern  msg * erase_user_1();
extern  msg * erase_user_1_svc();
extern int whiteboard_prog_1_freeresult ();
#endif /* K&R C */
#define WBADMIN_VERSION 2

#if defined(__STDC__) || defined(__cplusplus)
#define WBADMIN 1
extern  history * wbadmin_2(void *, CLIENT *);
extern  history * wbadmin_2_svc(void *, struct svc_req *);
extern int whiteboard_prog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define WBADMIN 1
extern  history * wbadmin_2();
extern  history * wbadmin_2_svc();
extern int whiteboard_prog_2_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_msg (XDR *, msg*);
extern  bool_t xdr_usuario (XDR *, usuario*);
extern  bool_t xdr_quadro (XDR *, quadro*);
extern  bool_t xdr_history (XDR *, history*);

#else /* K&R C */
extern bool_t xdr_msg ();
extern bool_t xdr_usuario ();
extern bool_t xdr_quadro ();
extern bool_t xdr_history ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_WHITEBOARD_H_RPCGEN */