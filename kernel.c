void kernel_main() {
    char* video_memory = (char*) 0xb8000;
    video_memory[0] = 'H';
    video_memory[1] = 0x07;
    video_memory[2] = 'i';
    video_memory[3] = 0x07;
}
