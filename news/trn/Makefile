COMMENT=	threaded newsreader

CATEGORIES=	news
MAINTAINER=	Marc Espie <espie@openbsd.org>

SITES=		${SITE_SOURCEFORGE:=trn/}
V=77
DISTNAME=	trn-4.0-test$V
PKGNAME=	trn-4.0.$V
REVISION=	3

PERMIT_PACKAGE=Yes
# Technically, we could put trn on CD-Rom, provided we include the distfile
# as well...

WANTLIB=c curses m


CONFIGURE_STYLE=simple
CONFIGURE_SCRIPT=Configure
CONFIGURE_ARGS=-dse -Doptimize="${CFLAGS}" -Dlocal=${PREFIX}
SEPARATE_BUILD=Yes

pre-configure: 
	cp ${FILESDIR}/openbsd-hints ${WRKSRC}/hints/openbsd.sh
	ln -s /usr/bin/true ${WRKDIR}/bin/nroff

FAKE_FLAGS= \
	rnbin=${WRKINST}${PREFIX}/bin \
	rnlib=${WRKINST}${PREFIX}/lib/trn \
	inewsbin=${WRKINST}${PREFIX}/bin \
	mansrc=${WRKINST}${PREFIX}/man/man1 \
	installfilexp=${WRKINST}${PREFIX}/lib/trn/filexp

post-install:
	find ${PREFIX}/lib/trn/HelpFiles \
		-exec chown ${SHAREOWN}:${SHAREGRP} {} +

NO_TEST=	Yes

.include <bsd.port.mk>
