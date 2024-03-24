
clean:
	rm -f output

run:
	g++ main.cpp account.cpp electricSpot.cpp admin.cpp Exit.cpp HandicappedSpot.cpp LargSpot.cpp SmallSpot.cpp ParkingAttendent.cpp ParkingOperation.cpp SpotBook.cpp CustomerData.cpp -o output
