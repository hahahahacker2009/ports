COMMENT=		flashes gpio led whenever pf logs to pflog0

DISTNAME=		gpioflicker-0.3
CATEGORIES=		sysutils
REVISION=		1

HOMEPAGE=		http://www.pro-bono-publico.de/openbsd/gpio/

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB=		c util

SITES=			${HOMEPAGE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gpioflicker ${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/gpioflicker.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
