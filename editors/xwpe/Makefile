COMMENT=	powerful programming editor

DISTNAME=	xwpe-1.5.30a
REVISION=	3
CATEGORIES=	editors

SITES=		${SITE_SUNSITE:=apps/editors/X/} \
		http://www.identicalsoftware.com/xwpe/ 

# GPLv2
PERMIT_PACKAGE=	Yes

WANTLIB=		ICE SM X11 c curses xcb z

ALL_TARGET=	xwpe

CONFIGURE_STYLE=gnu
DESTDIRNAME=	none
MAKE_FLAGS=	CFLAGS='${CFLAGS} -I${X11BASE}/include'
FAKE_FLAGS=	prefix=${WRKINST}${PREFIX} MANDIR=${WRKINST}${PREFIX}/man

NO_TEST=	Yes

.include <bsd.port.mk>
