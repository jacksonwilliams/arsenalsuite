#############################################################################
# Makefile for building: examples
# Generated by qmake (2.00a) (Qt 4.1.1-snapshot-20060105) on: Mon Jan 9 15:27:25 2006
# Project:  examples.pro
# Template: subdirs
# Command: /mnt/storage/qt4snap/bin/qmake -unix -o Makefile examples.pro
#############################################################################

first: make_default
MAKEFILE      = Makefile
QMAKE         = /mnt/storage/qt4snap/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		sub-simple \
		sub-demo

simple/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) "simple/" || $(MKDIR) "simple/"
	cd simple && $(QMAKE) simple.pro -unix -o $(MAKEFILE)
sub-simple-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) "simple/" || $(MKDIR) "simple/"
	cd simple && $(QMAKE) simple.pro -unix -o $(MAKEFILE)
sub-simple: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE)
sub-simple-make_default: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) 
sub-simple-make_first: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) first
sub-simple-all: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) all
sub-simple-clean: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) clean
sub-simple-distclean: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) distclean
sub-simple-install_subtargets: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) install
sub-simple-uninstall_subtargets: simple/$(MAKEFILE) FORCE
	cd simple && $(MAKE) -f $(MAKEFILE) uninstall
demo/$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) "demo/" || $(MKDIR) "demo/"
	cd demo && $(QMAKE) demo.pro -unix -o $(MAKEFILE)
sub-demo-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) "demo/" || $(MKDIR) "demo/"
	cd demo && $(QMAKE) demo.pro -unix -o $(MAKEFILE)
sub-demo: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE)
sub-demo-make_default: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) 
sub-demo-make_first: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) first
sub-demo-all: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) all
sub-demo-clean: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) clean
sub-demo-distclean: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) distclean
sub-demo-install_subtargets: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) install
sub-demo-uninstall_subtargets: demo/$(MAKEFILE) FORCE
	cd demo && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: examples.pro  /mnt/storage/qt4snap/mkspecs/default/qmake.conf /mnt/storage/qt4snap/mkspecs/qconfig.pri \
		/mnt/storage/qt4snap/mkspecs/features/qt_config.prf \
		/mnt/storage/qt4snap/mkspecs/features/exclusive_builds.prf \
		/mnt/storage/qt4snap/mkspecs/features/default_pre.prf \
		/mnt/storage/qt4snap/mkspecs/features/debug.prf \
		/mnt/storage/qt4snap/mkspecs/features/default_post.prf \
		/mnt/storage/qt4snap/mkspecs/features/warn_on.prf \
		/mnt/storage/qt4snap/mkspecs/features/qt.prf \
		/mnt/storage/qt4snap/mkspecs/features/unix/thread.prf \
		/mnt/storage/qt4snap/mkspecs/features/moc.prf \
		/mnt/storage/qt4snap/mkspecs/features/resources.prf \
		/mnt/storage/qt4snap/mkspecs/features/uic.prf
	$(QMAKE) -unix -o Makefile examples.pro
/mnt/storage/qt4snap/mkspecs/qconfig.pri:
/mnt/storage/qt4snap/mkspecs/features/qt_config.prf:
/mnt/storage/qt4snap/mkspecs/features/exclusive_builds.prf:
/mnt/storage/qt4snap/mkspecs/features/default_pre.prf:
/mnt/storage/qt4snap/mkspecs/features/debug.prf:
/mnt/storage/qt4snap/mkspecs/features/default_post.prf:
/mnt/storage/qt4snap/mkspecs/features/warn_on.prf:
/mnt/storage/qt4snap/mkspecs/features/qt.prf:
/mnt/storage/qt4snap/mkspecs/features/unix/thread.prf:
/mnt/storage/qt4snap/mkspecs/features/moc.prf:
/mnt/storage/qt4snap/mkspecs/features/resources.prf:
/mnt/storage/qt4snap/mkspecs/features/uic.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -unix -o Makefile examples.pro

qmake_all: sub-simple-qmake_all sub-demo-qmake_all FORCE

make_default: sub-simple-make_default sub-demo-make_default FORCE
make_first: sub-simple-make_first sub-demo-make_first FORCE
all: sub-simple-all sub-demo-all FORCE
clean: sub-simple-clean sub-demo-clean FORCE
distclean: sub-simple-distclean sub-demo-distclean FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-simple-install_subtargets sub-demo-install_subtargets FORCE
uninstall_subtargets: sub-simple-uninstall_subtargets sub-demo-uninstall_subtargets FORCE

/mnt/storage/qt4snap//bin/moc:
	(cd "$(QTDIR)/src/tools/moc" && $(MAKE))

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

