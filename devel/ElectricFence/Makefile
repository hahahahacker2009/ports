COMMENT=	library providing malloc debugging via VM protection

DISTNAME=	ElectricFence-2.0.5
PKGNAME=	${DISTNAME:L}
CATEGORIES=	devel
SITES=		${SITE_SUNSITE:=devel/lang/c/}
REVISION=	0

# GPL
PERMIT_PACKAGE=	Yes

NO_TEST=	Yes

do-install:
	${INSTALL_DATA} ${WRKBUILD}/libefence.a ${PREFIX}/lib
	${INSTALL_MAN} ${WRKBUILD}/libefence.3 ${PREFIX}/man/man3

.include <bsd.port.mk>
