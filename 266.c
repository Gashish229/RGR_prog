void append_record(const char *filename, const char *record) {
    FILE *file = fopen(filename, "a"); // "a" для добавления в конец
    if (file) {
        fprintf(file, "%s\n", record);
        fclose(file);
    }
}
