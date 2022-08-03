public class Solution {
    public int[][] FlipAndInvertImage(int[][] image) {
        for(int i = 0; i < image.Length; i++)
        {
            for(int j = 0; j < (image[0].Length + 1) / 2; j++)
            {
                int temp = image[i][j]  ^ 1;
                image[i][j] = image[i][image[0].Length - j - 1] ^ 1;
                image[i][image[0].Length - j - 1] = temp;
            }
        }
       
        return image;
    }
}