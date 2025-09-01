/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(cardPoints, k) {
    let lsum=0; let rsum=0; let maxsum=0;
    for(let i=0;i<k;i++)
    {
        lsum = lsum + cardPoints[i];
        maxsum = lsum;
    }

    let rindex = cardPoints.length - 1;
    for(let i=k-1;i>=0;i--)
    {
        lsum = lsum - cardPoints[i];
        rsum = rsum + cardPoints[rindex];

        rindex = rindex - 1 ;

        if(maxsum < (lsum+rsum))
            maxsum =  lsum+rsum

    }

    return maxsum;

};