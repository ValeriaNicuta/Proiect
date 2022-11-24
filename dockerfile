FROM gcc:latest
WORKDIR /usr/src/proiect
COPY SumaPatrate.cpp .
RUN gcc -o proiect SumaPatrate.cpp -lstdc++
CMD ["./proiect"]