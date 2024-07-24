class Solution {
public:
    int compress(vector<char>& chars) {
           int n = chars.size();
        if (n == 0) return 0;
        
        int write_idx = 0;
        int read_idx = 0;
        
        while (read_idx < n) {
            char current_char = chars[read_idx];
            int count = 0;
            
            // Count consecutive occurrences of current_char
            while (read_idx < n && chars[read_idx] == current_char) {
                read_idx++;
                count++;
            }
            
            // Write current_char
            chars[write_idx++] = current_char;
            
            // Write count if greater than 1
            if (count > 1) {
                string count_str = to_string(count);
                for (char c : count_str) {
                    chars[write_idx++] = c;
                }
            }
        }
        return write_idx;
    }
};
