COMMENT=		HTTP testing tool

DISTNAME=		wbox-5
CATEGORIES=		net www
REVISION =		0

HOMEPAGE=		http://www.hping.org/wbox/

MAINTAINER=		Laurent Fanis <laurent.fanis@gmail.com>

# BSD
PERMIT_PACKAGE=	Yes

WANTLIB=		c

SITES=			${HOMEPAGE}

NO_TEST=		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKDIST}/wbox ${PREFIX}/bin

.include <bsd.port.mk>
