MAINTAINER = 	Marc Espie <espie@openbsd.org>
CATEGORIES =	multimedia
COMMENT =	closed caption subtitles extractor
HOMEPAGE = 	https://ccextractor.sourceforge.net/
V =		0.56
DISTFILES =	ccextractor.${V:S/.//}-src.zip
SITES =		${SITE_SOURCEFORGE:=ccextractor/}
DISTNAME =	ccextractor-$V
REVISION =	3
WRKDIST =	${WRKDIR}/ccextractor.$V
WRKSRC =	${WRKDIST}/src

# GPL 2.0
PERMIT_PACKAGE =		Yes

COMPILER =		base-clang ports-gcc base-gcc

DOCDIR = 	${PREFIX}/share/doc/ccextractor
NO_TEST =	Yes

do-configure:
	ln -s ${FILESDIR}/Makefile ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/ccextractor ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${DOCDIR}
	for i in ${WRKDIST}/docs/*.TXT; do \
		${INSTALL_DATA} $$i ${DOCDIR}; \
	done

WANTLIB +=	c m ${COMPILER_LIBCXX} 

.include <bsd.port.mk>
