COMMENT=	Cubic Circle's POP3 daemon

DISTNAME=	cucipop-1.31
REVISION=	1
CATEGORIES=	mail

SITES=		ftp://ftp.informatik.rwth-aachen.de/pub/packages/cucipop/
SITES.p=	ftp://ftp.kame.net/pub/kame/misc/

PATCHFILES.p=	cucipop-1.31-v6-20010223.diff.gz
PATCH_DIST_STRIP= -p1

PERMIT_PACKAGE=	Yes
WANTLIB=		c

MAKE_FLAGS=	CFLAGS="${CFLAGS} -DINET6" LDFLAGS="" MD5_OBJ=""

pre-configure:
.for f in cucipop.8 makevpopdb.8
	@cd ${WRKSRC} && sed -e s#!!PREFIX!!#${PREFIX}#g ${f} > ${f}.new && \
		mv ${f}.new ${f}
.endfor

NO_TEST=	Yes

do-install:
	cd ${WRKSRC}; ${INSTALL_PROGRAM} cucipop makevpopdb ${PREFIX}/libexec
	cd ${WRKSRC}; ${INSTALL_MAN} cucipop.8 makevpopdb.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
