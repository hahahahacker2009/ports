# we use "macppc" and not "powerpc" on purpose here ; i.e. bktr(4) needed
ONLY_FOR_ARCHS=	i386 macppc amd64

COMMENT=	video capture daemon for bktr(4) driver

VERSION=	1.2
DISTNAME=	videod-${VERSION}
REVISION =	1
CATEGORIES=	graphics
HOMEPAGE=	http://videod.csoft.org/
SITES=		http://stable.csoft.org/videod/

# BSD license
PERMIT_PACKAGE=	Yes

WANTLIB=	c jpeg>=62

LIB_DEPENDS=	graphics/jpeg
# not needed, we install unformatted pages
MAKE_FLAGS=	NROFF=\#

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/videod ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/videod.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
