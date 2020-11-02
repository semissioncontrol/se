all:
	@rm -rf build; mkdir build; cd build; \
	cmake ..; \
	make

devel:
	cd build; make;