COMMENT =	library of generic stub functions
V =		0.1
DISTNAME =	libstubborn-${V}
SHARED_LIBS =	stubborn	0.0	# 0.1
CATEGORIES =	misc
HOMEPAGE =	https://github.com/rfht/libstubborn
MAINTAINER =	Thomas Frohwein <thfr@openbsd.org>

# ISC
PERMIT_PACKAGE =	Yes
SITES =		https://github.com/rfht/libstubborn/releases/download/${V}/
NO_TEST =		Yes

do-install:
	${INSTALL_DATA} ${WRKBUILD}/libstubborn.so.${LIBstubborn_VERSION} \
		${PREFIX}/lib/

.include <bsd.port.mk>
