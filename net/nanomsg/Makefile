COMMENT =		socket library providing multiple communication patterns

GH_ACCOUNT =		nanomsg
GH_PROJECT =		nanomsg
GH_TAGNAME =		1.2

SHARED_LIBS +=  	nanomsg		1.0 # 1.0

CATEGORIES =		net

HOMEPAGE =		https://nanomsg.org/

# MIT
PERMIT_PACKAGE =	Yes

MODULES =		devel/cmake
CONFIGURE_ARGS =	-DNN_ENABLE_DOC=false

WANTLIB +=		c pthread

.include <bsd.port.mk>
