COMMENT =		password recovery tool for PDF-files

DISTNAME =		pdfcrack-0.20
CATEGORIES =		security

HOMEPAGE =		https://pdfcrack.sourceforge.net/

MAINTAINER =		Benoit Lecocq <benoit@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB =		c

SITES =			${SITE_SOURCEFORGE:=pdfcrack/}

MAKE_FLAGS =		CFLAGS="${CFLAGS}" CC="${CC}"

NO_TEST =		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/pdfcrack ${PREFIX}/bin
	${INSTALL_MAN} ${WRKBUILD}/pdfcrack.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
