/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "whiteboard.h"

bool_t
xdr_msg (XDR *xdrs, msg *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->content, 50,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_usuario (XDR *xdrs, usuario *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->nick, 20,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, (1 + ( 3 )) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->id))
				 return FALSE;
			 if (!xdr_vector (xdrs, (char *)objp->cor, 3,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->id);
		{
			register int *genp;

			for (i = 0, genp = objp->cor;
				i < 3; ++i) {
				IXDR_PUT_LONG(buf, *genp++);
			}
		}
		}
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (usuario), (xdrproc_t) xdr_usuario))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->nick, 20,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, (1 + ( 3 )) * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->id))
				 return FALSE;
			 if (!xdr_vector (xdrs, (char *)objp->cor, 3,
				sizeof (int), (xdrproc_t) xdr_int))
				 return FALSE;

		} else {
		objp->id = IXDR_GET_LONG(buf);
		{
			register int *genp;

			for (i = 0, genp = objp->cor;
				i < 3; ++i) {
				*genp++ = IXDR_GET_LONG(buf);
			}
		}
		}
		 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (usuario), (xdrproc_t) xdr_usuario))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->nick, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->cor, 3,
		sizeof (int), (xdrproc_t) xdr_int))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (usuario), (xdrproc_t) xdr_usuario))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_quadro (XDR *xdrs, quadro *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->id, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->usuarios, sizeof (usuario), (xdrproc_t) xdr_usuario))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_history (XDR *xdrs, history *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (history), (xdrproc_t) xdr_history))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->quadros, sizeof (quadro), (xdrproc_t) xdr_quadro))
		 return FALSE;
	return TRUE;
}
