FROM gcc:latest
WORKDIR /usr/src/Proiect
COPY SumaPatrate.cpp .
RUN gcc -o proiect SumaPatrate.cpp -lstdc++
CMD ["./proiect"]